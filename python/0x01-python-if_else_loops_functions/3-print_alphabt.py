#!/usr/bin/python3
#print Ascii in lowercase

for i in range (97, 123):
  if chr(i) == 'q' or chr(i) == 'e':
    continue
  else:
    print(chr(i), end="")

