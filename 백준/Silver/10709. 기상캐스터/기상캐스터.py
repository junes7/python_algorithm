import sys
input=lambda:sys.stdin.readline().rstrip()
H, W = map(int, input().split())
arr = [input() for _ in range(H)]
for a in arr:  # 한 줄씩 순회
    lst = [-1 for _ in range(W)]  # 모두 구름이 뜨지 않았다고 가정한 배열 만들기
    for i in range(W):
        if a[i] == 'c':  # 구름이 있으면
            lst[i] = 0  # 0처리
    tmp = 0
    for i in range(1, W):
        if lst[i] == 0: # 다음 구름에서 tmp 초기화
            tmp = 0
        if lst[i - 1] != -1:  # 그 전값이 -1이 아니고 0이 아니면 tmp값 넣어주기
            if lst[i] != 0:  # 다음 구름 있는 곳은 다시 reset 되므로
                tmp += 1
                lst[i] = tmp
    print(*lst)