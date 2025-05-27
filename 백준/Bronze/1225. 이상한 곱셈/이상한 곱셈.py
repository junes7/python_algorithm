import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=input().split()
t=0
for i in range(len(a)):
    for j in range(len(b)):
        t+=int(a[i])*int(b[j])
print(t)