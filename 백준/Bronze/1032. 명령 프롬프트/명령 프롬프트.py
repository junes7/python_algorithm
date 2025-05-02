import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[input() for _ in range(n)]
st=list(arr[0])
for i in range(len(st)):
    for j in range(1,n):
        if(st[i]!=arr[j][i]):
            st[i]='?'
            break
print(''.join(st))