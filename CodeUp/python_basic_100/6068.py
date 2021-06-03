# 점수 입력받아 평가 출력하기
# 정수(0 ~ 100) 중 1개가 입력 | 평가기준:
# 점수 범위: 평가
# 90 ~ 100: A
# 70 ~ 89: B
# 40 ~ 69: C
# 0 ~ 39: D
# method 1
n = int(input())
if n >= 90:
    print('A')
else:
    if n >= 70:
        print('B')
    else:
        if n >= 40:
            print('C')
        else:
            print('D')