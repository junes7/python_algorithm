# 정수 3개 입력받아 합과 평균 출력하기
# method 1
a, b, c = input().split()
s = int(a) + int(b) + int(c)
avg = float(s/3)
print(s, format(avg, '.2f'))