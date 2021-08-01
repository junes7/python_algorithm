# 0 입력될 때까지 무한 출력하기
# print infinite until input 0
# 임의의 정수가 한 번에 1개씩 줄을 바꿔가며 계속 입력될 때, 0이 아니면
# 입력된 정수를 그대로 출력하고, 0이 입력되면 출력을 중단해 보자.
# method 1
n=1
while n!=0:
    n=int(input())
    if n!=0:
        print(n)
# method 2
# while True:
#     n = int(input())
#     if n==0:
#         break
#     else:
#         print(n)