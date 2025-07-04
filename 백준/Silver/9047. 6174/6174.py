import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n,cnt=input(),0
    while n!="6174":
        cnt+=1
        n=str(int(''.join(sorted(n,reverse=True)))-int(''.join(sorted(n))))
        if len(n)<4:
            for i in range(4-len(n)):
                n="0"+n
    print(cnt)