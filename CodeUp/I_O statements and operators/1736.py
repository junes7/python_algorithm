# 초를 일/시/분/초로 변환하기(convert second to day/hour/minute/second)
# 초를 입력받아 일/시/분/초의 형태로 나타내시오.
# 43 --> 0 0 0 43 (0일 0시간 0분 43초)
# 127 --> 0 0 2 7 (0일 0시간 2분 7초)
# 3600 --> 0 1 0 0 (0일 1시간 0분 0초)
# 86402 --> 1 0 0 2 (1일 0시간 0분 2초)
# method 1
ts = int(input())
d, h, m, s = 0, 0, 0, 0 
d = ts // 86400
ts %= 86400
h = ts // 3600
ts %= 3600
m = ts // 60
s = ts % 60
print(d, h, m, s)