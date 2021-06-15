# 두 실수 사이 출력하기
# 소수 둘째 자리의 두 실수 a와 b가 입력된다.
# a와 b사이의 수를 0.01간격 오름차순으로 출력
# method 1
a, b = map(float, input().split())
while a<=b:
    print(format(a, '.2f'), end=' ')
    a += 0.01