# 16진수 구구단 출력하기
# 16진수로 한 자리 수가 입력된다(단, A ~ F까지)
# 입력된 16진수에 1~F까지 순서대로 곱한,
# 16진수 구구단을 줄을 바꿔 출력한다.
# method 1
n = input()
a = int(n, 16)
for i in range(1, 16):
    print('%X'%a, '*%X'%i, '=%X'%(a*i), sep='')