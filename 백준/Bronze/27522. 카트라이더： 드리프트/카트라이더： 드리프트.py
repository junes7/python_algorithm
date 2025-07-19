import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([input().split() for _ in range(8)])
point=[10,8,6,5,4,3,2,1]
total_R,total_B=0,0
for i in range(8):
    if arr[i][1]=='B':
        total_B+=point[i]
    else:
        total_R+=point[i]
print("Red" if total_B<total_R else "Blue") 