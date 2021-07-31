# 비트단위로 AND 하여 출력하기
# print the result of bitwise and
# 정수 2개를 입력받아 두 정수를 비트단위로 and 연산한 후, 그 값을 정수로
# 출력해보자. 비트단위(bitwise) and 연산자 &를 사용하면 된다. (& : and,
# ampersand, 앰퍼샌드라고 읽는다.)
a,b=map(int,input().split())
print(a&b)