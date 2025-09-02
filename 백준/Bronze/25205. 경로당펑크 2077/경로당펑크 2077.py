import sys
input=lambda:sys.stdin.readline().rstrip()
n = input()
s = input()
last_character = s[-1]
# 판별
if last_character in ['q', 'w', 'e', 'r', 't', 'a', 's', 'd', 'f', 'g', 'z', 'x', 'c', 'v']:
    print(1)
else:
    print(0)