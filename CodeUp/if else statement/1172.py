# 세 수 정렬하기
# 세 수를 오름차순(ascending)으로 정렬하려고 한다.
# method 1
a, b, c = map(int, input().split())
if a > b:
    t = a
    a = b
    b = t
if b > c:
    t = b
    b = c
    c = t
if a > b:
    t = a
    a = b
    b = t
print(a, b, c)
# method 2
# a, b, c = map(int, input().split())
# for i in range(3):
#     if a > b:
#         t = a
#         a = b
#         b = t
#     if b > c:
#         t = b
#         b = c
#         c = t
# print(a, b, c)