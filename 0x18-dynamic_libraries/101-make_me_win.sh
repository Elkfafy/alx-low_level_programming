#!/bin/bash
wget -P /tmp https://github.com/alx-tools/0x18.c/blob/master/101-md5_gm -O gm
export LD_PRELOAD="./tmp/gm"
