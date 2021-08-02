# 빛 섞어 색 만들기(create color with mixing light)
# 빛의 3원색인 빨강(red), 초록(green), 파랑(blue) 빛을 섞어서 여러 가지
# 다른 색을 만들어 내려고 한다. RGB 각 색깔별로 만들어 낼 수 있는 빛의
# 가짓수가 주어질 때, RGB 색을 섞어 만들 수 있는 모든 R G B 정보와 총
# 가짓수를 계산해 보자.
# **모니터, 스마트폰과 같은 디스플레이에서 각 픽셀(pixel)의 색을 만들어내기
# 위해서 이런 방식으로 R, G, B 색을 조합한다.
# **픽셀은 그림(picture)을 구성하는 세포(cell)라는 의미로부터 이름이
# 만들어졌다. 한자로는 화소라고 한다.
# RGB 각 색깔별로 만들어 낼 수 있는 빛의 가짓수가 스페이스로 분리되어
# 입력된다. (0<=R,G,B<=127) 예를 들어, 3 3 3 은 각 색에 대해서 0 ~ 2
# 단계까지 3가지 세기로 각각의 빛을 만들어 낼 수 있음을 의미한다.
r,g,b=map(int,input().split())
for i in range(r):
    for j in range(g):
        for k in range(b):
            print(i,j,k)
print(r*g*b)