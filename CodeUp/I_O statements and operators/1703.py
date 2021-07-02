# 초를 시/분/초로 변환(change second to second/minute/hour form)
# 초를 입력받아 시/분/초의 형태로 나타내시오.
# method 1
s = int(input())
h = s//3600
s %= 3600
m = s//60
s %= 60
print(h, m, s)