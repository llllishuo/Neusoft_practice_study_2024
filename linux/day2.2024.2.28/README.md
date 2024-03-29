# 东软-实训-linux-2024.2.28

### cat

> NAME
>        cat - 连接文件并在标准输出上输出
>
> SYNOPSIS 总览
>        cat [选项列表]  [文件列表]...
>
> DESCRIPTION 描述
>        将文件列表中的文件或标准输入连接到标准输出。
>
>        -A, --show-all
>               等价于 -vET 。
>         
>        -b, --number-nonblank
>               给非空输出行编号。
>         
>        -e     等价于 -vE 。
>         
>        -E, --show-ends
>               在每行结束显示 $ 。
>         
>        -n, --number
>               给所有输出行编号。
>         
>        -s, --squeeze-blank
>               将所有的连续的多个空行替换为一个空行。
>         
>        -t     等价于 -vT 。
>         
>        -T, --show-tabs
>               把 TAB 字符显示为 ^I 。
>         
>        -u     (被忽略的选项)
>         
>        -v, --show-nonprinting
>               除了 LFD 和 TAB 之外所有控制符用 ^ 和 M- 记方式显示。
>         
>        --help 显示帮助并退出。
>         
>        --version
>               显示版本信息并退出。
>         
>        没有指定文件或指定的文件是 -，则从标准输入读取。
>




### tar
> NAME
>        tar - tar 档案文件管理程序的 GNU 版本。
>
> 总览
>        tar  [ - ]  A --catenate --concatenate | c --create | d --diff --compare | r --append | t --list | u --update | x -extract --get  [ --atime-preserve ]  [ -b, --block-size
>        N ]  [ -B, --read-full-blocks ]  [ -C, --directory DIR ]  [ --checkpoint    ]  [ -f, --file [HOSTNAME:] F ]  [ --force-local   ]  [ -F, --info-script F --new-volume-script  F
>        ]  [ -G, --incremental ]  [ -g, --listed-incremental F ]  [ -h, --dereference ]  [ -i, --ignore-zeros ]  [ -I, --bzip ]  [ --ignore-failed-read ]  [ -k, --keep-old-files ]  [
>        -K, --starting-file F ]  [ -l, --one-file-system ]  [ -L, --tape-length N ]  [ -m, --modification-time ]  [ -M, --multi-volume ]  [ -N, --after-date DATE, --newer DATE ]  [
>        -o,  --old-archive, --portability ]  [ -O, --to-stdout ]  [ -p, --same-permissions, --preserve-permissions ]  [ -P, --absolute-paths ]  [ --preserve      ]  [ -R, --record-
>        number ]  [ --remove-files ]  [ -s, --same-order, --preserve-order ]  [ --same-owner ]  [ -S, --sparse ]  [ -T, --files-from F ]  [  --null      ]  [  --totals    ]  [  -v,
>        --verbose  ]  [  -V,  --label  NAME  ]   [  --version   ]  [ -w, --interactive, --confirmation ]  [ -W, --verify    ]  [ --exclude FILE ]  [ -X, --exclude-from FILE ]  [ -Z,
>        --compress, --uncompress ]  [ -z, --gzip, --ungzip      ]  [ --use-compress-program PROG ]   [ --block-compress ]  [  -[0-7] [lmh] ]
>
>        filename1 [ filename2, ... filenameN ]
>         
>        directory1 [ directory2, ...directoryN ]
>
> 描述
>        tar 程序用于储存或展开 tar 存档文件。存档文件可放在磁盘中 ，也可以存为普通文件。 tar是需要参数的，可选的参数是A、c、d、r、t、u、x，您在使用tar时必须首先为 tar 指定至少
>        一个参数；然后，您必须指定要处理的文件或目录。如果指定一个目录则该目录下 的所有子目录都将被加入存档。
>
>    应用举例：
>        1）展开 abc.tar.gz 使用命令： tar xvzf abc.tar.gz 展开 abc.tar 使用命令： tar xvf abc.tar
>
>        2）将当前目录下的 man 目录及其子目录存成存档 man.tar tar cf man.tar ./man
>
> 参数说明
>        运行tar时必须要有下列参数中的至少一个才可运行
>
>        -A, --catenate, --concatenate
>               将一存档与已有的存档合并
>         
>        -c, --create
>               建立新的存档
>         
>        -d, --diff, --compare
>               比较存档与当前文件的不同之处
>         
>        --delete
>               从存档中删除
>         
>        -r, --append
>               附加到存档结尾
>         
>        -t, --list
>               列出存档中文件的目录
>         
>        -u, --update
>               仅将较新的文件附加到存档中
>         
>        -x, --extract, --get
>               从存档展开文件
>
> 其他参数
>        --atime-preserve
>               不改变转储文件的存取时间
>
>        -b, --block-size N
>               指定块大小为 Nx512 字节（缺省时 N=20)
>         
>        -B, --read-full-blocks
>               读取时重组块（？？？！！！）
>         
>        -C, --directory DIR
>               转到指定的目录
>         
>        --checkpoint
>               读取存档时显示目录名
>         
>        -f, --file [HOSTNAME:]F
>               指定存档或设备 (缺省为 /dev/rmt0)
>         
>        --force-local
>               强制使用本地存档，即使存在克隆
>         
>        -F, --info-script F --new-volume-script F
>               在每个磁盘结尾使用脚本 F （隐含 -M）
>         
>        -G, --incremental
>               建立老 GNU 格式的备份
>         
>        -g, --listed-incremental F
>               建立新 GNU 格式的备份
>         
>        -h, --dereference
>               不转储动态链接，转储动态链接指向的文件。
>         
>        -i, --ignore-zeros
>               忽略存档中的 0 字节块（通常意味着文件结束）
>         
>        --ignore-failed-read
>               在不可读文件中作 0 标记后再退出？？？
>         
>        -k, --keep-old-files
>               保存现有文件；从存档中展开时不进行覆盖
>         
>        -K, --starting-file F
>               从存档文件 F 开始
>         
>        -l, --one-file-system
>               在本地文件系统中创建存档
>         
>        -L, --tape-length N
>               在写入 N*1024 个字节后暂停，等待更换磁盘
>         
>        -m, --modification-time
>               当从一个档案中恢复文件时，不使用新的时间标签
>         
>        -M, --multi-volume
>               建立多卷存档,以便在几个磁盘中存放
>         
>        -N, --after-date DATE, --newer DATE
>               仅存储时间较新的文件
>         
>        -o, --old-archive, --portability
>               以 V7 格式存档，不用 ANSI 格式
>         
>        -O, --to-stdout
>               将文件展开到标准输出
>         
>        -p, --same-permissions, --preserve-permissions
>               展开所有保护信息
>         
>        -P, --absolute-paths
>               不要从文件名中去除 '/'
>         
>        --preserve
>               like -p -s 与 -p -s 相似
>         
>        -R, --record-number
>               显示信息时同时显示存档中的记录数
>         
>        --remove-files
>               建立存档后删除源文件
>         
>        -s, --same-order, --preserve-order
>               ？？？
>         
>        --same-owner
>               展开以后使所有文件属于同一所有者
>         
>        -S, --sparse
>               高效处理
>         
>        -T, --files-from F
>               从文件中得到要展开或要创建的文件名
>         
>        --null 读取空结束的文件名，使 -C 失效
>         
>        --totals
>               显示用 --create 参数写入的总字节数
>         
>        -v, --verbose
>               详细显示处理的文件
>         
>        -V, --label NAME
>               为存档指定卷标
>         
>        --version
>               显示 tar 程序的版本号
>         
>        -w, --interactive, --confirmation
>               每个操作都要求确认
>         
>        -W, --verify
>               写入存档后进行校验
>         
>        --exclude FILE
>               不把指定文件包含在内
>         
>        -X, --exclude-from FILE
>               从指定文件中读入不想包含的文件的列表
>         
>        -y, --bzip2, --bunzip2
>               用 bzip2 对存档压缩或解压
>         
>        -Z, --compress, --uncompress
>               用 compress 对存档压缩或解压
>         
>        -z, --gzip, --ungzip
>               用 gzip 对存档压缩或解压
>         
>        --use-compress-program PROG
>               用 PROG 对存档压缩或解压 ( PROG 需能接受 -d 参数）
>         
>        --block-compress
>               为便于磁盘存储，按块记录存档
>         
>        -[0-7] [lmh]
>               指定驱动器和密度[高中低]
>

### alias

``` alias ll='ls -l'``` 创建别名
但是这种只能临时创建重启既失效

``` echo "alias ll='ls -l'" >> .bash_profile ``` 
将别名写入到``` .bash_profile```系统配置文件中
``` source .bash_profile ```
重新应用配置



