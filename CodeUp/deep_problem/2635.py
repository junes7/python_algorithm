# 약수의 합(Large) (Sum of factors)
# 정수 N을 입력받아서 N의 모든 약수의 합을 구하는 프로그램을 작성.
# 첫 번째 줄에 정수 N이 입력된다. (1<=N<=1,000,000,000)
# N의 약수의 총 합을 출력한다.
# method 1
n = int(input())
rn = int(n ** (1/2))
s = 0
for i in range(1, rn+1):
    if n % i == 0:
        if i == (n//i):
            s += i
        else:
            s += i + (n//i)
print(s)