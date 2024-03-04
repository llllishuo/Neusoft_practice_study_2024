#!/bin/bash
# 批量ping测试地址
# ./ping.sh [host1] [host2] ...

if [ $# -eq 0 ]
then
  exit 0
fi


for host in "$@"
do
  ping -c 1 -W 1 $host >/dev/null 2>&1
  if [ $? -eq 0 ]
  then
    echo "$host is online"
  else
    echo "$host is offline"
  fi
done


