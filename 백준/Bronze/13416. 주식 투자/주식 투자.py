import sys
input=lambda:sys.stdin.readline().strip()
for _ in range(int(input())):
    get_max=0
    for _ in range(int(input())):
        get=[*map(int,input().split())]
        get_max+=0 if max(get)<0 else max(get)
    print(get_max)