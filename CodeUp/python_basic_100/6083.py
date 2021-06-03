# 빛 섞어 색 만들기
# 빨녹파(r, g, b) 각 빛의 가짓수가 공백을 두고 입력
# 3, 3, 3은 빨녹파 빛에 대해서 각각 0~2까지 3가지
# 색이 있음을 의미한다. 0 <= r,g,b <= 127
# 만들 수 있는 rgb 색의 정보를 오름차순으로 줄을
# 바꿔 모두 출력하고, 마지막에 그 개수를 출력한다.
r, g, b = input().split()
# 정수로 변환
r = int(r)
g = int(g)
b = int(b)
count = 0
for i in range(r):
    for j in range(g):
        for k in range(b):
            print(i, j, k)
            count += 1
print(count)