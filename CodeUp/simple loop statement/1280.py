# 홀수는 더하고 짝수는 빼고 2(add odd, subtract even)
# 두 자연수 a, b 구간에 대해 홀수는 더하고 짝수는 빼는것을 보여준 후
# 결과 출력 | 결과가 양수이면 +를 붙이지 않는다.
# method 1
a, b = map(int, input().split())
s = 0
for i in range(a, b+1):
    if i % 2 == 1:
        print('+', i, sep='', end='')
        s += i
    else:
        print('-', i, sep='', end='')
        s -= i
print('=', s, sep='')