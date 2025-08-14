import sys
input=lambda:sys.stdin.readline().rstrip()
t = int(input())
for i in range(t):
    a, b, c = map(int, input().split())
    baseA = (a ** 2) + ((b + c) ** 2)
    baseB = (b ** 2) + ((a + c) ** 2)
    baseC = (c ** 2) + ((a + b) ** 2)
    answer = min(baseA, baseB, baseC)
    print(answer)