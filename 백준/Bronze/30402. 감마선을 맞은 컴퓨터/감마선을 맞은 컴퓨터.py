import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[input().split() for _ in range(15)]
total=[0]*3
for i in range(15):
    total[0]+=arr[i].count('w')
    total[1]+=arr[i].count('b')
    total[2]+=arr[i].count('g')
if total[0]>0:
    print("chunbae")
elif total[1]>0:
    print("nabi")
elif total[2]>0:
    print("yeongcheol")