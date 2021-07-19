# 철광석 제련(smelting ironstone)
# 광석을 제련하는 공장이 있다. 이 공장에서는 5*5광석을 채집한 후 3*3 크기로
# 자를 수 있는 공구를 이용하여, 3*3 만큼만 채취하여 판매한다. 5*5광석의 각
# 위치의 가치가 주어질 때, 가장 가치가 높은 3*3 부분을 찾아 그 가치를
# 출력하는 프로그램을 작성하시오.
# 1) 5행 5열의 정수가 입력된다.
# 2) 입력되는 수는 모두 25개이며, 공백으로 구분된다.
# 3) 각 수 값은 모두 100이하의 자연수이다.
# 최대 가치를 가지는 3*3영역의 가치의 합을 출력한다.
# method 1
d = []
for i in range(5):
    d.append(list(map(int, input().split())))
s = 0
max = 0
for x in range(3):
    for y in range(3):
        s = 0
        for i in range(x, x+3):
            for j in range(y, y+3):
                s += d[i][j]
        if max < s:
            max = s
print(max)