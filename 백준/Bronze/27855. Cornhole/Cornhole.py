import sys
input=lambda:sys.stdin.readline().rstrip()
s1=[*map(int,input().split())]
s2=[*map(int,input().split())]
t1=s1[0]*3+s1[1]*1
t2=s2[0]*3+s2[1]*1
if t1==t2:
    print("NO SCORE")
else:
    if t1>t2:
        print(1,t1-t2)
    else:
        print(2,t2-t1)