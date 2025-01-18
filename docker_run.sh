#!/bin/bash

rm -rf ~/Library/Containers/com.docker.docker
mkdir -p ~/goinfre/Docker/Data
ln -s ~/goinfre/Docker ~/Library/Containers/com.docker.docker

open /Applications/Docker.app

while ! docker info >/dev/null 2>&1; do
    echo "Ожидание запуска Docker..."
    sleep 2
done

if [ "$(docker ps -aq -f name=ubuntu_dev)" ]; then
    echo "Контейнер 'ubuntu_dev' существует. Запуск контейнера 'ubuntu_dev'..."
    docker start ubuntu_dev
    docker exec -it -e TERM=xterm-256color ubuntu_dev zsh
else
    echo "Контейнер 'ubuntu_dev' не найден. Создание нового образа и запуск контейнера 'ubuntu_dev'..."
    docker pull ubuntu
    docker build -t ubuntu_dev .
    docker run -it -e TERM=xterm-256color -v $PWD:/ubuntu_dev -w /ubuntu_dev --name ubuntu_dev ubuntu_dev
fi

