# 각 자리수의 합
# sum of each digit
# 사용자 입력 양의 정수의 각 자리수 합
# 구하는 프로그램
# method 1
# n=int(input())
# s=0
# while n!=0:
#     s+=n%10
#     n//=10;
# print(s)
# method 2
s=0
for i in input():
    s+=int(i)
print(s)