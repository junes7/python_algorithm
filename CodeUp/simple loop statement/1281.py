# 홀수는 더하고 짝수는 빼고 3(add odd, subtract even)
# 두 자연수 a, b 구간에 대해 홀수는 더하고 짝수는 빼는 식을 보여준 후
# 결과 출력 | 결과가 양수이면 +를 붙이지 않는다.
# method 1
a, b = map(int, input().split())
# 첫 번째 항 출력
s = 0
if a % 2 == 1:
    print(a, end='')
    s = a 
else:
    print('-', a, sep='', end='')
    s -= a
for i in range(a+1, b+1):
    if i % 2 == 1:
        print('+', i, sep='', end='')
        s += i
    else:
        print('-', i, sep='', end='')
        s -= i
print('=', s, sep='')