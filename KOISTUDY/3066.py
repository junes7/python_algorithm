# 참/거짓이 서로 다를 때에만 참 출력하기
# print true if both boolean values are different each other
a,b=map(int,input().split())
# print(bool(a&~b|~a&b))
a = bool(a)
b = bool(b)
print(a and(not b)or(not a)and b)