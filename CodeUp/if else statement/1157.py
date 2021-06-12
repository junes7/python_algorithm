# 특별한 공 던지기(Special ball throw) 1
# 슬기와 체육 선생님의 공던지기로 아이스크림 내기
# 공을 던져 50m~60m 사이 공이 들어가면 슬기가 이기고,
# 그 외에 공이 떨어지면 체육선생님이 이기게 룰을 정했다.
# 위치가 50이상 60이하면 "win", 그 외에는 "lose"를 출력
# method 1
n = float(input())
print('win' if 50 <= n and n <= 60 else 'lose')