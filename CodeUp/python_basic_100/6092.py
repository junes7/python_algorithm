# 이상한 출석 번호 부르기 1
# 출석 번호를 n번 무작위로 불렀을 때, 각 번호
# (1 ~ 23)가 불린 횟수를 각각 출력해보자.
# 1번부터 번호가 불린 횟수를 순서대로 공백으로 
# 구분하여 한 줄로 출력하자.
# 개수를 입력받아 n에 정수로 저장
# n = int(input())
# 공백을 기준으로 잘라 a에 순서대로 저장
# 아래와 같이 저장하면 list a가 생성된다.
# a = input().split()
# 0부터 n-1까지...
# for i in range(n):
    # a에 순서대로 저장되어있는 각 값을 정수로 변환
    # a[i] = int(a[i])
# d라는 이름의 빈 리스트 변수를 만든다.
# d = []
# [0, 0, 0, ..., 0, 0, 0]같이 24개의 정수 값 0 추가
# for i in range(24):
#     d.append(0)
# 번호를 부를 때마다, 그 번호에 대한 카운트 1씩 증가
# for i in range(n):
    # d[a[i]] += 1
# 카운트한 값을 공백을 두고 출력
# for i in range(1, 24):
#     print(d[i], end=' ')
# method 1
n = int(input())
a = input().split()
for i in range(n):
    a[i]=int(a[i])
d = []
for i in range(24):
    d.append(0)
for i in range(n):
    d[a[i]] += 1
for i in range(1, 24):
    print(d[i], end=' ')