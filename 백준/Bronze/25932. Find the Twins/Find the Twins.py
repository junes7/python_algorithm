import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    arr=[*map(int,input().split())]
    print(*arr)
    if 18 in arr:
        print("both\n" if 17 in arr else "mack\n")
    else:
        print("zack\n" if 17 in arr else "none\n")