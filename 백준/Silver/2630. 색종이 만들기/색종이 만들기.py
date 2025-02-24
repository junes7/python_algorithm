import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[[*map(int,input().split())] for _ in range(n)]
r=[0,0]
def dac(i,j,n):
    color=arr[i][j]
    for y in range(i,i+n):
        for x in range(j,j+n):
            if color != arr[y][x]:
                quarter=n//2
                dac(i,j,quarter)
                dac(i,j+quarter,quarter)
                dac(i+quarter,j,quarter)
                dac(i+quarter,j+quarter,quarter)
                return
    r[color]+=1
dac(0,0,n)
print(r[0],r[1],sep="\n")