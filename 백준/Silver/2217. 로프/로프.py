import sys
input=lambda:sys.stdin.readline().rstrip()
def max_weight(N, ropes):
    ropes.sort(reverse=False)  # 로프 정렬
    max_w = 0
    for i in range(N):
        current_w = ropes[i] * (N-i)  # 현재 로프부터 사용할 때의 최대 중량
        max_w = max(max_w, current_w)  # 최대 중량 갱신
    return max_w
N = int(input())
ropes = [int(input()) for _ in range(N)]
print(max_weight(N, ropes))