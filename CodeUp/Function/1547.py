# 함수로 prime/composite 판별하기(distinguish prime/composite through function)
# 소수인 경우 prime, 합성수인 경우 composite를 출력한다.
d = int(input())
def prime(n):
    cnt = 0
    for i in range(2, n+1):
        if n % i == 0:
            cnt += 1
    return True if cnt == 1 else False
print('prime' if prime(d) else 'composite')