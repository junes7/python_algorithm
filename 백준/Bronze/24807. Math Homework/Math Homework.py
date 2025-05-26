import sys
input=lambda:sys.stdin.readline().rstrip()
b, c, d, l = map(int, input().split())
cnt = 0
for i in range(l + 1):
    if i * b > l: break;
    for j in range(l + 1):
        if i * b + j * c > l: break;
        for k in range(l + 1):
            if i * b + j * c + k * d > l: break;
            if i * b + j * c + k * d == l:
                print(f"{i} {j} {k}")
                cnt += 1
if cnt == 0:
    print("impossible")