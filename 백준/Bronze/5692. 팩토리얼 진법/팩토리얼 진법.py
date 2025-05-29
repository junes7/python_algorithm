import sys
input=lambda:sys.stdin.readline().strip()
def facto(n):
    return n*facto(n-1) if n>1 else 1
while 1:
    n=input()
    if n=='0': break
    s=0
    for i in range(1,len(n)+1):
        s+=int(n[len(n)-i])*facto(i)
    print(s)