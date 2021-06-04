# 그림 파일 저장용량 계산하기
# 이미지가 컴퓨터에 저장될 때 디지털 데이터화 되어 저장된다.
# 가로 해상도 w, 세로 해상도 h, 한 픽셀을 저장하기 위한 비트 b
# w, h는 모두 정수(1~1024)이고 b는 40이하의 4의 배수이다.
# method 1
w, h, b = input().split()
w = int(w)
h = int(h)
b = int(b)
sp = float(w * h * b / 8 /1024 / 1024)
print(format(sp, '.2f'), 'MB')