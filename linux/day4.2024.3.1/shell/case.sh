#!/bin/bash
# ScriptName: case "$
#
#
download=1
echo "========="
while [[ $download == 1 ]]; do
  echo -n "Is this Ok(y\d\N): "
  read run
  case "$run" in
    y|Y|yes)
      echo -e "\ninput is $run"
      break
      ;;
    d|D)
      echo -e "\ninput is $run"
      break
      ;;
    n|N|no)
      echo -e "\ninput is $run"
      break
      ;;
    *)
      echo "err.."
      exit 1
      ;;
  esac
done

