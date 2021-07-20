# 가우스 기호(Gaussian Sign)
# 가우스 기호란, n이 정수일 때, [x] = n이면 x값의 범위는 n≤x<n+1 입니다.
# [x/n]=1인 x를 원소로 가진 집합 A_n의 원소를 원소나열법으로 나타내시오.
# 자연수 n이 입력된다.(n ≤ 1,000)
# 문제의 조건에 해당하는 수 들을 오름차순으로 원소나열법으로 출력하시오.
# 표현오류) 원소나열법으로 나열할 때 쉼표 다음에 꼭 띄어쓰기가 있어야 된다.
# method 1
n = int(input())
x = n
d = [] 
while x // n < 2:
    if x // n == 1:
        d.append(x)
    x += 1
print('{', end='')
for i in range(len(d)):
    if i == len(d)-1:
        print(d[i], end='')
    else:
        print('%d,' % d[i], end=' ')
print('}')