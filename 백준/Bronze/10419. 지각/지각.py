import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    d=int(input())
    t=0
    while True:
        if t*(t+1)>d:
            break
        t+=1
    print(t-1)