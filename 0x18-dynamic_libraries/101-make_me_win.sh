#!/bin/bash
wget -P /tmp  https://github.com/Nader-albaire/alx-low_level_programming/tree/master/0/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
