rm -rf ~/Library/Containers/com.docker.docker
mkdir -p ~/goinfre/Docker/Data
ln -s ~/goinfre/Docker ~/Library/Containers/com.docker.docker

open /Applications/Docker.app

while ! docker info >/dev/null 2>&1; do
    echo "Ожидание запуска Docker..."
    sleep 2
done

docker pull ubuntu
docker build -t "container" .
docker run -it -v $PWD:/tmp -w /tmp container
