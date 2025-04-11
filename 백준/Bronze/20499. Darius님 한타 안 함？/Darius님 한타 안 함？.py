import sys
input=lambda:sys.stdin.readline().rstrip()
k,d,a=map(int,input().split('/'))
print("hasu" if k+a<d or d==0 else "gosu")