import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
for a in arr:
    if a==9:
        print("F")
        exit(0)
print("S")