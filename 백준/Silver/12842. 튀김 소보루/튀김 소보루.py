import sys
input=lambda:sys.stdin.readline().rstrip() 
N, S = map(int, input().split())
M = int(input())
time = [int(input()) for _ in range(M)]
t = 0
while N != S:
    for i in range(M):
        if t % time[i] == 0:
            N -= 1
            if N == S:
                print(i + 1)
                break
    t += 1