# 정수 판별(Integer distinction)
# 정수 하나를 입력받아 양수이면 "양수", 음수이면
# "음수", 0이면 0을 출력하시오.
# method 1
n = int(input())
if n > 0:
    print("양수")
elif n < 0:
    print("음수")
else:
    print(0)