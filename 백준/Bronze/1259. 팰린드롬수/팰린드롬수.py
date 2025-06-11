import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    n=input()
    if n=='0': break
    flag=True
    for i in range(len(n)//2):
        if n[i]!=n[len(n)-1-i]:
            flag=False
            break
    print("yes" if flag else "no")