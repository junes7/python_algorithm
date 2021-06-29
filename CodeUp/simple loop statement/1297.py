# 단면의 최대 넓이(maximum area of section)
# 그림과 같이 길이가 n인 철판을 구부려서 단면이 직사각형인 ㄷ자 모양을 만들려고
# 한다. 이 ㄷ자 모양을 수직으로 자른 단면의 넓이 S를 최대로 하려면 양 끝에서
# 얼마만큼 구부려야 하는지 계산하시오.
# method 1
n = int(input())
mArea, a = 0, 0
for i in range(1, int(n/2)):
    t = i * (n/2-i)
    if mArea < t:
        mArea = t
        a = i
print(a)