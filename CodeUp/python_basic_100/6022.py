# 연월일 입력받아 나누어 출력하기
# method 1
s = input()
print(s[0:2], s[2:4], s[4:6], sep=' ')
# method 2
# s = input()
# for i in range(int(len(s)/2)):
#     print(s[i*2:i*2+2], end=' ')