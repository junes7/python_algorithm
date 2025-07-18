import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
end=t if t<42 else 42
total,abilities=0,0
arr=sorted([int(input()) for _ in range(t)],reverse=True)
for i in range(end):
    total+=arr[i]
    if arr[i]>=250:
        abilities+=5
    elif arr[i]>=200:
        abilities+=4
    elif arr[i]>=140:
        abilities+=3
    elif arr[i]>=100:
        abilities+=2
    elif arr[i]>=60:
        abilities+=1
print(total,abilities)