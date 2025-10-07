import sys
input=lambda:sys.stdin.readline().rstrip()
from itertools import permutations
n = int(input())
nums = list(permutations(list(range(1, 10)), 3))	# 1부터 9까지의 3자리 숫자 모음 생성
for _ in range(n):
    num, s, b = map(int, input().split())
    tmp = []	# 현재 조건에 맞는 숫자가 들어갈 배열
    for check in nums:		# 3자리 숫자 모음 탐색
        cnt_s, cnt_b = 0, 0	# 스트라이크와 볼의 갯수
        for i, str_num in enumerate(str(num)):	# 입력한 숫자를 문자열로 바꾸어 숫자의 위치와 값을 한 번에 확인
            if int(str_num) == check[i]:		# 현재 탐색중인 숫자와 입력한 숫자 중 위치와 값이 같은 수가 있다면
                cnt_s += 1						# 스트라이크 갯수 증가
            if int(str_num) != check[i] and int(str_num) in check:	# 위치는 다르나 숫자가 포함되어 있다면
                cnt_b += 1						# 볼 갯수 증가
        if s == cnt_s and b == cnt_b:			# 스트라이크와 볼의 갯수가 입력값과 같다면
            tmp.append(check)					# tmp에 현재 숫자 추가
    nums = tmp									# 기존 3자리 숫자의 모음을 현재까지의 조건에 맞는 숫자의 모듬으로 변경
print(len(nums))								# 최종 조건에 맞는 수들의 길이 출력