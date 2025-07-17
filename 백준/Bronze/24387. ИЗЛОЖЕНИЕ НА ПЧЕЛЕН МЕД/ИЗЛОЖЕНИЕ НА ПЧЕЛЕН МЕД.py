import sys
input=lambda:sys.stdin.readline().rstrip()
price=sorted([*map(int,input().split())])
jars=sorted([*map(int,input().split())])
total=0
for i in range(3):
    total+=price[i]*jars[i]
print(total)