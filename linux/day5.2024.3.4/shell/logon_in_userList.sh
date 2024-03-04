#!/bin/bash
# 

usernameArray=()
password=""
name_prefix=""


if [ $# -eq 0 ]
then
  
  read -p "请输入用户名前缀: " name_prefix
  read -p "请输入初始密码: " password
  sleep 1s
  reading="y"
  user_num=0
  echo "即将进行用户输入(最大数量为10)!"
  sleep 1s
  while [ $reading = "y" -a $user_num -lt 10 ]; do
    echo "No.$user_num:"
    read -p "用户名:" usernameArray[$user_num]
    read -p "是否继续(y/N):" reading
    user_num=$[$user_num+1]
  done
elif [ $# -eq 3 ]
then

  name_prefix=$1
  user_file_array=`cat $2`
  user_num=0

  for user_item in $user_file_array
  do
    usernameArray[$user_num]=$user_item
    user_num=$[$user_num+1]
  done

else
  echo -e "命令格式错误!!!\n其格式为: ./logon_in_userList.sh or ./logon_in_userList.sh \[name_prefix\] \[user_file\] \[password\]"
  exit 0
fi
    

for ((i=0;i < ${#usernameArray[@]};i++))
do
  user_item=${usernameArray[$i]}
  user=$name_prefix$user_item
  if id $user &> /dev/null
  then
    echo "$user 已存在!"
  else
    useradd $user
    if [ -n "$password" ]
    then
      echo "$password" | passwd --stdin $user &> /dev/null
    else
      echo "123456" | passwd --stdin $user &> /dev/null
    fi
  fi
done

sleep 1s
echo "添加完成:"
for ((i=0;i < ${#usernameArray[@]};i++))
do
  user_item=${usernameArray[$i]}
  cat /etc/passwd | grep $name_prefix$user_item
done

sleep 1s
echo "开始删除以上创建的用户!!!"
sleep 1s


for ((i=0;i < ${#usernameArray[@]};i++))
do
  user_item=${usernameArray[$i]}
  userdel $name_prefix$user_item
done

sleep 1s

echo "删除完毕!!!"




