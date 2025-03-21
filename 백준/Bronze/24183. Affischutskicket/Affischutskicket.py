import sys
input=lambda:sys.stdin.readline().rstrip()
type=[*map(int,input().split())]
size=[(229,324,2),(297,420,2),(210,297,1)]
total=0
for i in range(3):
    total+=(type[i]*size[i][0]*size[i][1]/10**6)*size[i][2]
print(f"{total:.6f}")