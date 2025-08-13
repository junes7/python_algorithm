import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(1,int(input())+1):
    arr=[*map(int,input().split())]
    maxn=max(arr)
    if arr[0]==arr[1]==arr[2]: print(f"Case #{i}: equilateral")
    elif maxn<sum(arr)-maxn: print(f"Case #{i}: {'isosceles' if arr[0]==arr[1] or arr[1]==arr[2] or arr[0]==arr[2] else 'scalene'}")
    else: print(f"Case #{i}: invalid!")