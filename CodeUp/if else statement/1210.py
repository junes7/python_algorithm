# 칼로리 계산하기(Calculate calories)
# 보림이는 엄마와 함께 놋데리아에 갔다. 먹고 싶은게
# 많았으나 엄마가 살찐다고 2가지만 골르라고 하였다.
# 2메뉴의 칼로리 합이 500보다 크면 엄마가 화를 내고,
# 500이하면 화를 내지 않는다.
# 보림이 선택 메뉴는 다음과 같다.
# 1. 치즈버거: 400 칼로리
# 2. 야채버거: 340 칼로리
# 3. 우유: 170 칼로리
# 4. 계란말이: 100 칼로리
# 5. 샐러드: 70 칼로리
# 이 메뉴들 중 2가지 메뉴를 선택 및 칼로리 합 계산,
# 합이 500보다 크면 "angry", 이하면 "no angry" 출력
# method 1
# m1, m2 = map(int, input().split())
# def switch(n):
#     return {1: 400, 2: 340, 3: 170, 4: 100, 5:70}.get(n, -1)
# tc = switch(m1) + switch(m2)
# print("angry" if tc > 500 else "no angry")
# method 2
m1, m2 = map(int, input().split())
def cal(m):
    if m == 1:
        c = 400
    elif m == 2:
        c = 340
    elif m == 3:
        c = 170
    elif m == 4:
        c = 100
    elif m == 5:
        c = 70
    return c
tc = cal(m1) + cal(m2)
print("angry" if tc > 500 else "no angry")