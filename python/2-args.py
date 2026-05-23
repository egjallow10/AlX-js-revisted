#!/usr/bin/env python3

import sys

if len(sys.argv)  <= 1:
  print("{} arguments".format(0))
else: 
  print("{} arguments".format(len(sys.argv)-1))
  for i in range(1,len(sys.argv)):
    print("{}: {}".format(i,sys.argv[i]))
