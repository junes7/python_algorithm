import sys
input=lambda:sys.stdin.readline().rstrip()
c, b = map(int, input().split())
rlt=max(c,b)/min(c,b)
print(int(rlt) if int(rlt)==rlt else round(rlt,6))