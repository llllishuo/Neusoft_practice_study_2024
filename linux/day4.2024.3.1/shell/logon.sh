#!/bin/bash
#

read -p "账号: " username
read -p "密码： " password
useradd username
if [[ -n $password ]]; then
  echo "$password" | passwd --stdin $username
elif [[ -z $password ]]; then
  echo "123456" | passwd --stdin $username
fi


