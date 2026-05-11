#!/usr/bin/env/python3

def uppercase(str):
  uppercase_str = list(str)
  for i in range(len(uppercase_str)):
    if(ord(uppercase_str[i]) > 96 and ord(uppercase_str[i]) < 123):
      uppercase_str[i] = chr(ord(uppercase_str[i]) - 32)
  print("{}".format("".join(uppercase_str)))
    
    
