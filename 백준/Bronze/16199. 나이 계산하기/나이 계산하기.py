import sys
input=lambda:sys.stdin.readline().rstrip()
y1,m1,d1=map(int,input().split())
y2,m2,d2=map(int,input().split())
print(y2-y1 if m2>m1 or (m2==m1 and d2>=d1) else y2-y1-1,y2-y1+1,y2-y1,sep="\n")