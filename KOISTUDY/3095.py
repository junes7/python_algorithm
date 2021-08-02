# 그림 데이터 저장용량 계산하기
# calculate storage volume of image data
# 가로 해상도를 w(아주 작은 색 점인 픽셀(pixel)들로 큰 그림을 만든다고
# 할 때, 가로 방향으로 픽셀의 개수를 의미한다.)
# 세로 해상도를 h(세로 방향으로 픽셀의 개수를 의미한다.)
# 한 픽셀을 저장하는데 사용할 비트 수를 b라고 할 때(한 픽셀의 색을
# 저장하기 위해서 RGB 각 색을 8비트씩 24비트로 저장할 수 있다.)
# 비트맵(bitmap) 방식으로 그림을 저장하기 위해서 필요한 그림 데이터 저장
# 용량을 계산해 보자.
w,h,b=map(int,input().split())
n=float(w*h*b/8/1024/1024)
print('%.2f MB'%n)