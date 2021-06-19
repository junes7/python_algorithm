# 3의 배수 판별하기(distinguish multiple of three)
# 자연수 n이 입력되면 3의 배수인지 아닌지 판별하시오.
# method 1
n = int(input())
if n % 3 == 0:
    print(1)
else:
    print(0)