#!/bin/bash
wget -p https://github.com/mahakamal-e/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/root/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so
