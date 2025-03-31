import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
if -2**15<=n<2**15:
    print("short")
elif -2**31<=n<2**31:
    print("int")
else:
    print("long long")