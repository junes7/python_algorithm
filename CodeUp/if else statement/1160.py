# 아르바이트 가는 날 (The day to go to a part-time job)
# 주원이는 월, 수, 금, 일 아르바이트를 간다.
# 다음은 요일의 순서이다. 1~7 | 1. 월요일, 7. 일요일
# 요일의 번호가 입력으로 주어지면 그 날이 아르바이트 가는
# 날이면 "oh my god", 가는 날이 아니면 "enjoy"를 출력
n = int(input())
print("oh my god" if n % 2 == 1 else "enjoy")