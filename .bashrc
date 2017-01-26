export PS1="${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@fuck-GFW\[\033[01;34m\] \w \$\[\033[00m\]"
#------------------------------------------------------------------------------
PATH="/home/zet/.local/bin:$PATH"
export PATH
export TERM=screen-256color
#export TERM="xterm-256color"
# powerline设置
POWERLINE_SCRIPT=powerline
if [ -f $POWERLINE_SCRIPT ]; then
  source $POWERLINE_SCRIPT
fi

