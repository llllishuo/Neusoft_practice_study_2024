#!/bin/bash
read -p "学号前缀:" u_name
read -p "初始密码:" password

for u in {1..10}
#for ((u=1;u<+37;u++))
do
	username=$u_name$u
        useradd $username
	if [[ -n $password ]]
	then
 	echo "$password" | passwd --stdin $username
	
	elif [[ -z $password ]]
	then
	echo "12345678" | passwd --stdin $username
	fi
        
  
done
