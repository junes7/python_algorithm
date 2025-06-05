import sys
input=lambda:sys.stdin.readline().rstrip()
x=int(input())
total=0
for _ in range(int(input())):
    p=int(input())
    total+=x-p
print(total+x)