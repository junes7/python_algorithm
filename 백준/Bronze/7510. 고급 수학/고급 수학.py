import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(1,int(input())+1):
    arr=sorted(map(int,input().split()))
    if arr[0]**2+arr[1]**2==arr[2]**2:
        print(f"Scenario #{i}:\nyes\n")
    else:
        print(f"Scenario #{i}:\nno\n")