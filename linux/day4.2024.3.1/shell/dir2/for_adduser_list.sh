#!/bin/bash
for username in `cat userlist`
do
 useradd $username
 echo "12345678" | passwd --stdin $username
done
