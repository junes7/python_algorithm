# 두 주사위의 합(Sum of two dices)
# 주사위는 각 면에 1~6까지 적혀 있는 정육면체이다. 이런 주사위 2개를 굴려
# 합이 k가 나오는 경우를 조사하려고 한다. 예를 들어, 주사위 두 개를 굴려
# 5가 나오는 경우는 1 4, 2 3, 3 2, 4 1이다. 주사위 하나만 굴리는 경우 없다.
# method 1
k = int(input())
for i in range(1, 7):
    for j in range(1, 7):
        if i + j == k:
            print(i, j)
        else:
            continue