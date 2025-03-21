import sys
input=lambda:sys.stdin.readline().rstrip()
t1=[*map(int,input().split())]
t2=[*map(int,input().split())]
s1,s2=0,0
for i in range(1,4):
    s1+=i*t1[i-1]
    s2+=i*t2[i-1]
print(0 if s1==s2 else 1 if s1>s2 else 2)