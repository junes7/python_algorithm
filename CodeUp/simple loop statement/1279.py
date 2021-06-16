# 홀수는 더하고 짝수는 빼고 1(add odd, subtract even)
# 두 자연수 a, b 구간에 대해서 홀수는 더하고 짝수는 뺀 다음 합 출력
# method 1
a, b = map(int, input().split())
s = 0
for i in range(a, b+1):
    if i % 2 == 1:
        s += i
    else:
        s -= i
print(s)