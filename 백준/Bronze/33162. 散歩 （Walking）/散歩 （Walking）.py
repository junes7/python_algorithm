import sys
input=lambda:sys.stdin.readline().rstrip()
s=0
for i in range(int(input())):
    s=s+3 if i%2==0 else s-2
print(s)