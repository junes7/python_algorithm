# 직사각형의 최대 넓이(maximum area of a rectangle)
# 길이가 n인 철망을 이용해 직사각형 모양의 가축 우리를 가능한 한 넓게 만들려고
# 한다. 이 때 최대 넓이를 정수로 출력하시오.
# method 1
n = int(input())
tlen = n/2
mArea = 0
for i in range(1, int(tlen)):
    t = i * (tlen-i)
    if mArea < t:
        mArea = t
print(int(mArea))