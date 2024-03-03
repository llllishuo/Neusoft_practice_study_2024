#!/bin/bash
for username in zhangsan lisi wangwu
do
    userdel -r $username
#    echo "12345678" | passwd --stdin $username
done
