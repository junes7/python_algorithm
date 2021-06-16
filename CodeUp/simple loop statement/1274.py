# 소수 판별(prime distinction)
# 소수란, 약수가 1과 자기 자신 두 개 뿐인 수를 말한다. 어떤 수가 입력되면
# 그 수가 소수인지 판단하시오.
n = int(input())
s = 0
for i in range(1, n+1):
    if n % i == 0:
        s += 1
print('prime' if s <= 2 else 'not prime')