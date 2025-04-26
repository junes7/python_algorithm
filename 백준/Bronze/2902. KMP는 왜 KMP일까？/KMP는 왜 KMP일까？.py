import sys
input=lambda:sys.stdin.readline().rstrip()
st=input().split('-')
t=""
for c in st:
    t+=c[0]
print(t)