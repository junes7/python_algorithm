import sys
input=lambda:sys.stdin.readline().rstrip()
k,w,m=map(int,input().split())
diff=w-k
print(diff//m+(0 if diff%m==0 else 1))