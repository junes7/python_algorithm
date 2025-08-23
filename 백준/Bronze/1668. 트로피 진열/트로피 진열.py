N = int(input())
trophy = [int(input()) for _ in range(N)]
# 왼쪽의 max 값, 오른쪽의 max 값
max_left, max_right = trophy[0], trophy[-1]
# 왼쪽, 오른쪽에서 바라볼 때 트로피의 개수
left, right = 1, 1
for i in range(1, N) :
    if max_left < trophy[i] :
        left += 1
        max_left = trophy[i]
    else :
        continue
for j in range(N-1, -1, -1) :
    if max_right < trophy[j] :
        right += 1
        max_right = trophy[j]
    else :
        continue
print(left,right,sep="\n")