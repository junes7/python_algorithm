# 거품 정렬(Bubble Sort)
# 버블 정렬이란 이웃하는 숫자들끼리 크기를 비교하여 자리를 바꾸는 정렬
# 기법이다. 버블 정렬은 구현이 쉬운 반면 속도가 빠른 편은 아니다. 그리고
# 가장 큰 단점으로 정렬이 이미 다 끝났는데도, 끝까지 대소비교를 하는
# 문제점이 있다.
# 예를 들어, 10 50 30 20 40 이 있고 오름차순으로 정렬한다면 총 4단계를
# 거치게되는데,
# 1단계 : 10 30 20 40 50
# 2단계 : 10 20 30 40 50  (정렬 완료)
# 3단계 : 10 20 30 40 50
# 4단계 : 10 20 30 40 50
# 4단계중 이미 2단계에서 정렬이 완료가 된다.
# 이 단계를 구하는것이 문제이다. 이 단계를 찾아 프로그램을 종료시키면
# 정렬속도를 향상 시킬수있다.
# 이 단계를 찾아 내는 프로그램을 작성하시오.
# 첫 줄에 데이터의 개수 n이 입력된다. (2 <= n <= 1,000) 둘째 줄에 n개의
# 데이터가 공백을 기준으로 입력된다. | 정렬이 끝나는 단계를 출력한다.
# method 1
n = int(input())
d = list(map(int, input().split()))
t = 0
for i in range(len(d)-1):
    cnt = 0
    for j in range(len(d)-(i+1)):
        if d[j] > d[j+1]:
            l = d[j]
            d[j] = d[j+1]
            d[j+1] = l
            cnt += 1
    if cnt == 0:
        t = i
        break
if t == 0:
    print(len(d)-1-t)
else:
    print(t)