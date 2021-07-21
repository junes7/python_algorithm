# 앞으로 뒤로(Forward and backward)
# Nikky와 Byron이 체육시간에 바보 게임을 하고 있다. Nikky는 a 걸음 앞으로
# 걸어 간 다음, b 걸음 뒤로 간다. 그 후 계속 a 걸음 앞으로 b 걸음 뒤로를
# 반복한다. 비슷하게 Byron도 c 걸음 앞으로 간 다음, d 걸음 뒤로 가는 것을
# 계속 반복한다. Byron과 Nikky는 보폭이 같고, 같은 시간에 첫 걸음이 시작.
# Nikky와 Byron은 축구장의 한쪽 끝에서 걷기 시작한다. s 걸음후에 체육 선생님
# 휘슬을 불었을 때, 시작 위치에서 가장 멀리 이동한 사람은 누구인가?
# 5개의 정수 a, b, c, d, s가 차례대로 각 행에 입력된다. 
# (1 <= a, b, c, d <= 100 , a >= b , c >= d, 1 <= s <= 10,000)
# s걸음 후에 휘슬을 불었을 때 시작위치로 부터 가장 멀리 떨어진 사람의 이름을
# 출력한다. (Nikky, Byron) | 만약 같은 위치이면 "Tied" 를 출력한다.
# method 1
a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())
t = s
r1, r2 = 0, 0
for i in range(s//(a+b)):
    t -= (a + b)
    r1 += a - b
if t == 0:
    r1 += 0
else:
    if t <= a:
        r1 += t
    else:
        t -= a
        r1 += a - t
t = s
for j in range(s//(c+d)):
    t -= (c+d)
    r2 += c - d
if t == 0:
    r2 += 0
else:
    if t <= c:
        r2 += t
    else:
        t -= c
        r2 += c - t
if r1 == r2:
    print('Tied')
elif r1 > r2:
    print('Nikky')
else:
    print('Byron')