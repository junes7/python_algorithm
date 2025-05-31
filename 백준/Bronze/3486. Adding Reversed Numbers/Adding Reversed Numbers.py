import sys
input=lambda:sys.stdin.readline().strip()
def newNum(num):
    while num[-1]=='0':
        del num[-1]
    return int(''.join(num)[::-1])
for _ in range(int(input())):
    n,m=map(str,input().split())
    ans=newNum(list(n))+newNum(list(m))
    print(newNum(list(str(ans))))