import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    cnt=0
    t=input()
    if t=="#": break
    for i in range(len(t)):
        tem= chr(ord(t[i])+32) if 65<=ord(t[i])<=90 else t[i]
        if tem in ['a','e','i','o','u']:
            cnt+=1
    print(cnt)