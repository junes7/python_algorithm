# 특별한 공 던지기 3
# 지난 번 져서 아이스크림을 산 슬기가 체육 선생님과
# 공던지기로 아이스크림 내기를 다시 하자고 하고 룰 제안
# 1. 공이 50m~70m이거나 공의 위치가 6의 배수면 슬기가 이김
# 2. 그 외의 구간에 떨어지면 체육 선생님이 이김
# 슬기가 이긴 구간 "win" 출력, 그 외에는 "lose" 출력
# method 1
n = float(input())
print('win' if (50 <= n and n <= 70) or n % 6 == 0 else 'lose')