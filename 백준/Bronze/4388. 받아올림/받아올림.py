import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    a,b=input().split()
    if a==b=='0': break
    if len(a)<len(b): a,b=b,a;
    while len(a)!=len(b): b='0'+b
    carry,cnt=0,0
    for i in range(len(a)-1,-1,-1):
        carry=(carry+int(a[i])+int(b[i]))//10
        if carry>0: cnt+=1
    print(cnt)