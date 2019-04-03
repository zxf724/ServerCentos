2019/03/25
sudo chsh -s /usr/local/bin/zsh
chsh -s /bin/bash

2019/03/30
vim /etc/ssh/sshd_config 
ClientAliveInterval  60   --应该是需要重启,本地端口也是一样的

2019/04/01
echo '' >> test.c
set .vimrc http://wiki.csie.ncku.edu.tw/vim/vimrc
python using window10
  -->> https://blog.csdn.net/Alger_magic/article/details/79674404

2019/04/02
解决vi/vim中粘贴会在行首多很多缩进和空格的问题
https://www.cnblogs.com/end/archive/2012/06/01/2531142.html
输入前--> set paste
输入后-->	set nopaste
vim删除前后n个字符
前n个：:%s/^.\{10\}//
	其中，%表示所有行，s表示替换，"%s"可用"1,$"代替（下同）；正则表达式"/^.\{10\}//"中，
	^表示行首；"."表示要删除的字符个数，".\{10\}"表示删除10个字符，可用10个"."表示；
后n个：:%s/.\{10\}$//
	其中，"$"表示行尾，其他同上；

2019/04/03
domain name 
