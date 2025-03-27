import sys
input=lambda:sys.stdin.readline().rstrip()
n=str(int(input()))
if n=='12345678910':
    print(10)
else:
    flag=True
    for i in range(len(n)):
        if str(i+1)!=n[i]:
            flag=False
            break
    print(n[-1] if(flag) else  -1)