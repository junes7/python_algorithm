import sys
def facto(n):
    return 1 if n<2 else n*facto(n-1)
n=int(sys.stdin.readline().rstrip())
s,cnt=str(facto(n)),0
for i in range(len(s)-1,-1,-1):
    if s[i]!='0':
        break
    cnt+=1
print(cnt)