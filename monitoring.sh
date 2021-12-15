#!/bin/bash
arch=`uname -a`
cpu=`grep -c ^processor /proc/cpuinfo`
vcpu=`cat /proc/cpuinfo | grep processor | wc -l`
memu=`free -m | grep 'mem' | awk '{print $3}'`
diskuse=`df -h | grep /dev/sda1`
cpuload=``
lastreboot=`who -b`
lvmuse=``
TCPconnexions=`ss -s | grep 'estab'`
Userlog=`w | awk '{print $1}'`
Network=`hostnami -I`
Sudo=`whoami``
wall"
#Architecture: $arch
#CPU physical: $cpu
#vCPU: $vcpu
#Memory Usage: $memu
#Disk Usage: $diskuse
#CPU load: $cpuload
#Last boot: $lastreboot
#LVM use: $lvmuse
#Connexions TCP : $TCPconnexions
#User log: $Userlog
#Network: $Network
#Sudo : $Sudo
"