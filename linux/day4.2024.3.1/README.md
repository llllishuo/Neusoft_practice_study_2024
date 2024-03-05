# 东软-实训-linux-2024.3.1

### shell 
 | 运算符	 | 说明	 | 举例 | 
 |  ----  |  ----  |  ----  | 
 | -eq	 | 检测两个数是否相等，相等返回 true。	 | [ $a -eq $b ] 返回 false。 | 
 | -ne	 | 检测两个数是否不相等，不相等返回 true。	 | [ $a -ne $b ] 返回 true。 | 
 | -gt	 | 检测左边的数是否大于右边的，如果是，则返回 true。	 | [ $a -gt $b ] 返回 false。 | 
 | -lt	 | 检测左边的数是否小于右边的，如果是，则返回 true。	 | [ $a -lt $b ] 返回 true。 | 
 | -ge	 | 检测左边的数是否大于等于右边的，如果是，则返回 true。	 | [ $a -ge $b ] 返回 false。 | 
 | -le	 | 检测左边的数是否小于等于右边的，如果是，则返回 true。	 | [ $a -le $b ] 返回 true。 | 
 | !	 | 非运算，表达式为 true 则返回 false，否则返回 true。	 | [ ! false ] 返回 true。 |
 | -o	 | 或运算，有一个表达式为 true 则返回 true。	 | [ $a -lt 20 -o $b -gt 100 ] 返回 true。 |
 | -a	 | 与运算，两个表达式都为 true 才返回 true。	 | [ $a -lt 20 -a $b -gt 100 ] 返回 false。 |
 | -z	 | 检测字符串长度是否为0，为0返回 true。	 | [ -z $a ] 返回 false。 |
 | -n	 | 检测字符串长度是否不为 0，不为 0 返回 true。	 | [ -n "$a" ] 返回 true。 |

> 注: 
>   如果使用运算符 请使用"[[ 1 == 1 ]]"

#### file
 | 操作符	 |说明	 |举例 |
 | ---- | ---- | ---- |
 | -b file	 | 检测文件是否是块设备文件，如果是，则返回 true。	 |  | [ -b $file ] 返回 false。 |
 | -c file	 | 检测文件是否是字符设备文件，如果是，则返回 true。	 | [ -c $file ] 返回 false。 |
 | -d file	 | 检测文件是否是目录，如果是，则返回 true。	 | [ -d $file ] 返回 false。 |
 | -f file	 | 检测文件是否是普通文件（既不是目录，也不是设备文件），如果是，则返回 true。	 | [ -f $file ] 返回 true。 |
 | -g file	 | 检测文件是否设置了 SGID 位，如果是，则返回 true。	 | [ -g $file ] 返回 false。 |
 | -k file	 | 检测文件是否设置了粘着位(Sticky Bit)，如果是，则返回 true。	 | [ -k $file ] 返回 false。 |
 | -p file	 | 检测文件是否是有名管道，如果是，则返回 true。	 | [ -p $file ] 返回 false。 |
 | -u file	 | 检测文件是否设置了 SUID 位，如果是，则返回 true。	 | [ -u $file ] 返回 false。 |
 | -r file	 | 检测文件是否可读，如果是，则返回 true。	 | [ -r $file ] 返回 true。 |
 | -w file	 | 检测文件是否可写，如果是，则返回 true。	 | [ -w $file ] 返回 true。 |
 | -x file	 | 检测文件是否可执行，如果是，则返回 true。	 | [ -x $file ] 返回 true。 |
 | -s file	 | 检测文件是否为空（文件大小是否大于0），不为空返回 true。	 | [ -s $file ] 返回 true。 |
 | -e file	 | 检测文件（包括目录）是否存在，如果是，则返回 true。	 | [ -e $file ] 返回 true。 |

### vim

 --  在只读情况下保存文件 --

``` :w !sudo tee % ```


### grep

grep命令用于查找文件中包含有指定字符串的行。该命令的语法为
grep  \[参数\]   要查找的字符串   文件名

### dd

按照指定大小和个数的数据块来复制文件或转换文件

Linux系统中可以直接使用dd命令来压制出光盘映像文件。

``` dd if=/dev/zero of=file1 count=2 bs=560M ```

从/dev/zero设备文件中取出两个大小为560MB的数据块，然后保存成名为file1的文件。

``` dd if=/dev/cdrom of=RHEL-server-8.0-x86_64.iso ```

制作光盘映像文件iso

### free

查看系统内存、虚拟内存的大小及占用情况


### timedatectl

``` timedatectl |grep Time     	//查看当前时区 ```

``` timedatectl list-timezones	//查看所有可用时区 ```

``` timedatectl set-timezone Asia/Shanghai	//修改当前时区 ```


### cal 

显示指定月份或年份的日历

### ps

查看系统的进程

ps  \[参数\]
ps命令的常用参数选项如下：
> -a：显示当前控制终端的进程（包含其他用户的）。
> -u：显示进程的用户名和启动时间等信息。
> -w：宽行输出，不截取输出中的命令行。
> -l：按长格形式显示输出。
> -x：显示没有控制终端的进程。
> -e：显示所有的进程。
> -t n：显示第n个终端的进程。


### pidof

查询某个指定服务进程的PID值

### kill && killall

kill命令向进程发送强制终止信号

killall命令用于终止某个指定名称的服务所对应的全部进程

### top

top命令可以实时监控进程的状况。top屏幕自动每5秒刷新一次，也可以用“top -d 20”，使得top屏幕每20秒刷新一次。

### bg、jobs、fg

* jobs命令用于查看在后台运行的进程
* bg命令用于把进程放到后台运行
* fg命令用于把从后台运行的进程调到前台



### shutdown

在指定时间关闭系统

shutdown  \[参数\]  时间  \[警告信息\]
shutdown命令常用的参数选项如下。
> -r：系统关闭后重新启动。
> -h：关闭系统。

时间可以是以下几种形式。
> now：表示立即。
> hh:mm：指定绝对时间，hh表示小时，mm表示分钟。
> +m：表示m分钟以后。

### halt命令

halt命令表示立即停止系统，但该命令不自动关闭电源，需要人工关闭电源。

### reboot命令

reboot命令用于重新启动系统，相当于“shutdown  -r  now”。

### poweroff命令

poweroff命令用于立即停止系统，并关闭电源，相当于“shutdown -h now”


### history命令

history命令用于显示用户最近执行的命令





