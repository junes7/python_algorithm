import sys
input=lambda:sys.stdin.readline().rstrip()
N,L,K = map(int, input().split())
arr = []
for _ in range(N):
    sub1, sub2 = map(int, input().split())
    arr.append([sub1,sub2])
    arr.sort(key=lambda x:x[1])
score,k = 0,0
for i in arr:
    if k == K:
        break
        
    if i[1] <= L:
        score += 140
        k += 1
    elif i[0] <= L:
        score += 100
        k += 1
print(score)