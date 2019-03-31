2019/03/25
sudo chsh -s /usr/local/bin/zsh
chsh -s /bin/bash
2019/03/30
vim /etc/ssh/sshd_config 
ClientAliveInterval  60   --应该是需要重启,本地端口也是一样的
