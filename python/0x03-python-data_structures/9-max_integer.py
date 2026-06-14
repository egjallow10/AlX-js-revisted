#!/bin/usr/env python3

def max_integer(my_list=[]):
  if len(my_list) == 0:
    return 0

  maximum_number = 0
  for i in my_list:
    if i > maximum_number:
      maximum_number = i
  return maximum_number
