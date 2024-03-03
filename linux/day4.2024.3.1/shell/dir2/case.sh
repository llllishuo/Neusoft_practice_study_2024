#!/bin/bash
echo "zhangsan"
echo "lisi"
echo "wangwu"
read -p "输入员工姓名:" name
case $name in
	zhangsan)
	echo "正式员工";;
	lisi)
	echo "实习员工";;
	wangwu)
	echo "访客";;
	*)
	echo "无法使用";;
esac
