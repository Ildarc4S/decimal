FROM ubuntu

RUN apt-get update
RUN apt-get install -y gcc
RUN apt-get install -y valgrind
RUN apt-get install -y make
RUN apt-get install -y vim
RUN apt-get install -y check
RUN apt-get install -y clang-format
RUN apt-get install -y lcov
RUN apt-get install -y gcovr
RUN apt-get install -y git
RUN apt-get install -y curl
RUN apt-get install -y zsh
RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)" --unattended 

COPY . /project

CMD ["zsh"]
