#!/bin/bash

echo "zhangsan"
echo "lisi"
echo "wangwu"
read -p "Input name:" name
if [ $name == "zhangsan" ]
then
   echo "正式员工，使用账号密码连接无线网络."
elif [ $name == "lisi" ]
then
   echo "实习员工，使用s00123，账号登录无线网络."
elif [ $name == "wangwu" ]
then
   echo "访客，使用手机号码和短信码登录网络."
else
  echo "无法等罗网络" 
fi
