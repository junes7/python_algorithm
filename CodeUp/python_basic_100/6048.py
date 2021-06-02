# 정수 2개 입력받아 비교하기 1
# method 1
a, b = input().split()
if int(a) < int(b):
    print(True)
else: # a >= b
    print(False)
# method 2
# a, b = input().split()
# print(True if int(a) < int(b) else False)