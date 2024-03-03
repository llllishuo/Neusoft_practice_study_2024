#!/bin/bash
for username in zhangsan lisi wangwu
do
    useradd $username
    echo "12345678" | passwd --stdin $username
done
