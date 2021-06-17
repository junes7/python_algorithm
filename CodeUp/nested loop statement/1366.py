# 사각형 출력하기 4
# 대각선과 테두리가 그려진 사각형에 가로, 세로 중심에 선을 추가하기로 했다.
# n이 입력되었을때, 이러한 n*n 사각형을 출력하는 프로그램 생성. n은 홀수
# method 1
n = int(input())
a, b = 1, n
for i in range(1, n+1):
    if i == 1 or i == (n+1)//2 or i == n:
        for j in range(n):
            print('*', end='')
    elif i < (n+1)//2:
        a += 1
        b -= 1
        for k in range(1, n+1):
            if k==1 or k==a or k==(n+1)//2 or k==b or k==n:
                print('*', end='')
            else:
                print(' ', end='')
    else:
        for k in range(1, n+1):
            if k==1 or k==a or k==(n+1)//2 or k==b or k==n:
                print('*', end='')
            else:
                print(' ', end='')
        a -= 1
        b += 1
    print()