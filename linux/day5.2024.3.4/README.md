# 东软-实训-2024.3.4

### chmod

* u+s: (suid)以管理员身份执行
* g+s: (sgid)以某个组身份执行
* o+t: (粘贴位)只能由管理员或所有者身份删除


### setfacl

针对单一用户、单一文件或目录进行权限设置

setfacl 参数
  -m：设置后续acl参数 
  -x：删除后续acl参数  
  -b：删除全部的acl参数
  -k：删除默认的acl参数
  -R：递归设置acl，包括子目录
  -d：设置默认acl

``` setfacl -m u:username:rwx FileOrDir ```

``` getfacl FileOrDir ```


