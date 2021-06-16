# 약수 구하기(get divisor)
# 자연수 N이 주어지면 N의 약수를 오름차순으로 모두 출력하시오.
n = int(input())
for i in range(1, n+1):
    if n % i == 0:
        print(i, end=' ')