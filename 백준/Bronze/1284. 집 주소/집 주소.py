import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    n=input()
    if n=='0': break
    s=2
    for i in range(len(n)):
        if int(n[i])==1:
            s+=2
        elif int(n[i])==0:
            s+=4
        else:
            s+=3
    s+=(len(n)-1)
    print(s)