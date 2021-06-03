# 0 입력될 때 까지 무한 출력하기
# method 1
# 처음 조건 검사를 통과하기 위해 0이 아닌 값을 임으로 저장
n = 1
while n != 0:
    n = int(input())
    if n == 0:
        break
    else:
        print(n)
# method 2
# while True:
#     n = int(input())
#     if n == 0:
#         break
#     else:
#         print(n)