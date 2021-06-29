# 가장 큰 수(biggest odd number and even number)
# 자연수는 홀수와 짝수로 나눌 수 있다. 10개의 자연수가 주어질 때, 홀수들 중
# 가장 큰 수와 짝수들 중 가장 큰 수를 구하여 출력하는 프로그램을 작성하시오.
# (단 모든 수가 홀수 혹은 짝수라면 가장 큰 수만 출력한다.)
# method 1
d = list(map(int, input().split()))
odd, even = 0, 0
for i in range(len(d)):
    if d[i] % 2 == 0 and even < d[i]:
        even = d[i]
    if d[i] % 2 == 1 and odd < d[i]:
        odd = d[i]
if odd != 0 and even == 0:
    print(odd)
elif odd == 0 and even != 0:
    print(even)
else:
    print(odd, even)