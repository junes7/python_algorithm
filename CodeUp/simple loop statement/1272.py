# 기부
# 근제는 대기업 CSH의 회장이다. 최근 기업의 이미지가 좋지 않아 가난한
# 사람들에게 기부를 하려고 한다. 특이한 방법으로 기부를 했는데, 기부할
# 사람들을 번호 순으로 일정한 규칙에 따라 돈을 준다고 한다.
# 1, 10, 2, 20, 3, 30, 4, 40, 5, 50, 6, 60, 7, 70, ...
# 한편, 가난한 존과 밥은 돈을 받기 위해 신청을 했다. 존의 번호(k), 밥의
# 번호(h)가 주어질때 존과 밥이 받는 기부금의 합을 구하시오.
# method 1
k, h = map(int, input().split())
# 존이 받는 기부금
if k == 1:
    a = 1
elif k % 2 == 0:
    a = k * 5
elif k % 2 == 1:
    a = k//2 + 1
# 밥이 받는 기부금
if h == 1:
    b = 1
elif h % 2 == 0:
    b = h * 5
elif h % 2 == 1:
    b = h//2 + 1
print(a + b)