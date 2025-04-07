import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[]
for _ in range(5):
    t=int(input())
    if t not in arr:
        arr+=[t]
    elif t in arr:
        arr.remove(t)
print(arr[0])