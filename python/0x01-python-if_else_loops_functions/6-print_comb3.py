#!/usr/bin/python3

for i in range(90):
  for j in range(i+1, 10):
    if(i < 10):
      print("{}{}".format(i,j), end=",")
    else:
       print("{}".format(i), end=",")
print()
