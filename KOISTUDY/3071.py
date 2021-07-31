# 비트단위로 OR 하여 출력하기
# print the result of bitwise or
# 정수 2개를 입력받아 두 정수를 비트단위로 or 연산한 후, 그 값을 정수로
# 출력해 보자. 비트단위(bitwise) or 연산자 |를 사용하면 된다. 
# (| : or, vertical bar, 버티컬 바)
# ※ | 은 파이프(pipe)연산자라고 불리는 경우도 있다.
a,b=map(int,input().split())
print(a|b)