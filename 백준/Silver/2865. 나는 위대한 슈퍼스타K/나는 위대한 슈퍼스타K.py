import sys
input=lambda:sys.stdin.readline().rstrip()
n, m, k = map(int, input().split())
sing = [0 for _ in range(n)]
for _ in range(m):
    scr = list(input().split())
    for i in range(0, len(scr), 2):
        if sing[int(scr[i])-1] < float(scr[i+1]):
            sing[int(scr[i])-1] = float(scr[i+1])
sing.sort(reverse=True)
sing = sing[:k]
print(round(sum(sing),1))