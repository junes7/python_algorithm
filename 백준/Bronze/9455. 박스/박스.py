for _ in range(int(input())):
    m, n = map(int ,input().split())
    graph = [list(map(int, input().split())) for _ in range(m)]
    count = 0
    for i in range(n) :
        bottom = m-1 #제일 밑바닥 설정
        for j in reversed(range(m)) :
            if graph[j][i] == 1:
                count += bottom - j #바닥과 박스 사이의 공간 계산
                bottom -=1 #그 위로 밑바닥 재설정
    print(count)