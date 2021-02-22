# 암호 만들기
from itertools import combinations
vowels = ('a', 'e', 'i', 'o', 'u')
l, c = map(int, input().split())
# 모음 갯수는 변하지 않으니깐 튜플 형태로 만들어준다.
array = input().split()
array.sort()

for password in combinations(array, l):
    # print("".join(password))
    count = 0
    for i in password: 
        if i in vowels:
            count += 1
    if count >= 1 and count <= l - 2:
        password = list(password)
        print("".join(password))

