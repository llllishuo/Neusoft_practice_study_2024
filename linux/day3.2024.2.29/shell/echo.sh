#!/bin/bash
#

# \a  发出警告声
echo "\a 参数将发出警告声"
read -t 5 -p "是否演示(y/N): " -n 1 isgo
if [[ $isgo == "y" ]]
then
  echo -e "\n演示:"
  sleep 1s
  echo "此时...."
  sleep 1s
  echo "突然!!!"
  sleep 0.5s
  echo "一只大手拍了拍...那略显羞涩的键盘"
  sleep 1s
  echo "啪..啪..啪"
  sleep 1s
  echo -e "亚\a麻\a跌\a\a\a !!!\a"
  echo "随即发出声响。"
fi




