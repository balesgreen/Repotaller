#!/bin/sh

echo "████████╗███████╗██████╗ ███╗   ███╗██╗   ██╗██╗  ██╗"
echo "╚══██╔══╝██╔════╝██╔══██╗████╗ ████║██║   ██║╚██╗██╔╝"
echo "   ██║   █████╗  ██████╔╝██╔████╔██║██║   ██║ ╚███╔╝ "
echo "   ██║   ██╔══╝  ██╔══██╗██║╚██╔╝██║██║   ██║ ██╔██╗ "
echo "   ██║   ███████╗██║  ██║██║ ╚═╝ ██║╚██████╔╝██╔╝ ██╗"
echo "   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝"
                                                     
                                                             
echo ""                                                            
echo "Running update & upgrade Termux Repositories..."
echo ""
apt update -y && apt upgrade -y

echo ""
echo "Running installations Repositories Termux..."
echo ""

#All informations in repositories

pkg install wget
pkg install git
pkg install zip
pkg install python2
pkg install nano
pkg install vim
pkg install clang
pkg install netcat

#End informations

#Installations Tools

echo ""
echo "Running installations Tools..."
echo ""

git clone https://github.com/sqlmapproject/sqlmap
