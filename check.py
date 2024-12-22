import re
import sys
import subprocess

GREEN = "\033[92m"
YELLOW = "\033[93m"
RED = "\033[91m"
RESET = "\033[0m"

def check_formatting(filename):
    try:
        result = subprocess.run(['clang-format', '--style=file', filename],
                                capture_output=True, text=True)
        if result.returncode != 0:
            print(f"{RED}Error checking formatting: {result.stderr}{RESET}")
            return False
        
        formatted_code = result.stdout
        if formatted_code.strip() != ''.join(open(filename).readlines()).strip():
            print(f"{RED}File [{filename}] CLANG_FORMAT ERROR{RESET}")
            return False
        else:
            print(f"{GREEN}File [{filename}] CLANG_FORMAT OK{RESET}")
            return True
    except FileNotFoundError:
        print(f"{RED}clang-format not found. Ensure it is installed and available in PATH.{RESET}")
        return False

def count_lines_in_functions(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()

    in_function = False
    function_lines = 0
    open_braces = 0 
    function_name = ""
    function_start_line = 0 
    max_nesting_level = 0  
    current_nesting_level = 0  
    return_count = 0

    for line_number, line in enumerate(lines, start=1):
        stripped_line = line.strip()

        pattern = r'\b(\w+)\s*\([^)]*\)\s*(\{|\s*;)'  
        matches = re.findall(pattern, stripped_line)

        if matches and not in_function:
            in_function = True
            function_name = matches[0][0] 
            function_start_line = line_number  
            
            if matches[0][1] == '{':
                open_braces += 1  
                function_lines += 1 
                current_nesting_level = 1 

        elif in_function:
            if re.search(r'\bbreak\b', stripped_line):
                print(f"{RED}Warning: BREAK in [{function_name}]{RESET}")
            if re.search(r'\bcontinue\b', stripped_line):
                print(f"{RED}Warning: CONTINUE in [{function_name}]{RESET}")
            if re.search(r'\bgoto\b', stripped_line):
                print(f"{RED}Warning: GOTO in [{function_name}]{RESET}")
            if re.search(r'\bexit\b', stripped_line):
                print(f"{RED}Warning: EXIT in [{function_name}]{RESET}")

            return_count += len(re.findall(r'\breturn\b', stripped_line))

            open_braces += stripped_line.count('{')
            open_braces -= stripped_line.count('}')

            function_lines += 1
            
            current_nesting_level += stripped_line.count('{')
            max_nesting_level = max(max_nesting_level, current_nesting_level)
            current_nesting_level -= stripped_line.count('}')

            if open_braces == 0:
                if return_count >= 2:
                    print(f"{RED}Warning: RETURN in [{function_name}]{RESET}")

                if max_nesting_level >= 5 or function_lines >= 50:
                    color = RED
                elif max_nesting_level == 4 or function_lines >= 40:
                    color = YELLOW
                else:
                    color = GREEN
                
                print(f"{color}[{function_name}]:{function_start_line}::{function_lines}::{max_nesting_level}{RESET}")
                
                in_function = False 
                function_lines = 0
                max_nesting_level = 0
                return_count = 0 

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python check.py <file_name1.c> <file_name2.c> ...")
        sys.exit(1)

    for filename in sys.argv[1:]:
        print(f"\nProcessing file: {filename}")
        
        if check_formatting(filename):
            count_lines_in_functions(filename)
