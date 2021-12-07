arch = 'uname -a'
cpu = 'grep -c ^processor /info/cpuinfo'
memuse = 'free -m | grep 'Mem''
diskuse = 'df / -h | grep /dev/sda1 //prend la ligne
cpuload = ''
lastreboot = 'who -b'
lvmuse = ''
