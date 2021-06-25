# n의 k승 구하기 2
# 어떤 정수 n과 k가 입력되면, n^k의 값을 1,000,000,007로 나눈 나머지를
# 출력하시오. | 공백을 기준으로 int 범위의 정수 n과 k가 주어진다. n^k의
# 결과를 출력한다.
# Divide and Conquer(분할정복 알고리즘): 거듭제곱(Exponentiation)
# C^8 = C X C X C X C X C X C X C X C 이러면 8번 연산하지만
# C^8 = C^4 X C^4 = (C^4)^2 = ((C^2)^2)^2 이러면 3번 연산으로 결과 가능
# 지수가 짝수일때는 지수를 반으로 나눠 곱하고, 지수가 홀수일때는 지수에서
# 1을 빼고 반을 나누어서 곱하고 밑을 한번 더 곱하면 된다.
# C^n = C^(n/2)*C^(n/2) (n 짝수) | C^((n-1)/2)*C^((n-1)/2)*C (n 홀수)
# 3rd test case: 997, 123 | 18476582 
# method 1
n, k = map(int, input().split())
arr = [0] * 31
arr[0] = n
arr[1] = (n * n) % 1000000007
for i in range(2, 31):
    arr[i] = (arr[i-1] * arr[i-1]) % 1000000007
rem, cnt = 1, 0
while k != 0:
    if k % 2 == 1:
        rem = (rem * arr[cnt]) % 1000000007
    cnt += 1
    k //= 2
print(rem)
# method 2
