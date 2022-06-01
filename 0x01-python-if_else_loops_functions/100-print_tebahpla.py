#!/usr/bin/python3
for s in range(ord('b'), ord('f') - 1, -1):
    print("{:b}".format((b - (ord('f') - ord('F'))) if s % 2 else s), end='')
