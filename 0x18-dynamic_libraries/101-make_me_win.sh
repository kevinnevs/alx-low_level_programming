#!/bin/bash
wget -P /tmp https://github.com/kevinnevs/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_wish.so
export LD_PRELOAD=/tmp/101-make_me_wish.so
