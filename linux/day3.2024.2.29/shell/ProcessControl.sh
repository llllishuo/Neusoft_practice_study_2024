#!/bin/bash


echo "流程控制"

file=README.md

if [[ -d $file ]] then
  echo "-> $file is dir "
elif [[ -f $file ]] then
  echo "-> $file is file "
fi

