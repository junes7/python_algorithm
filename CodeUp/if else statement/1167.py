# 두 번째 수(second number)
# 세 개의 숫자를 작은 순서로 나열, 두 번째 수 출력. 
# 5 9 2 작은 순서로 나열 2 5 9이고, 두 번째 수는 5
# method 1
# a = list(map(int, input().split()))
# a.sort()
# print(a[1])
# method 2(정렬 미사용)
a, b, c = map(int, input().split())
if (a < b and b < c) or (c < b and b < a):
    print(b)
elif (b < a and a < c) or (c < a and a < b):
    print(a)
elif (a < c and c < b) or (b < c and c < a):
    print(c)
else:
    print(b if a > b else a)