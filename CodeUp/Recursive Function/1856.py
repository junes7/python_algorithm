# 계단 뛰어 오르기(Jumping Stairs)
# 한 번에 계단을 1개 또는 2개 또는 3개를 뛰어 오를 수 있을 때, 한 정수 n을
# 입력받아 바닥(0번째 계단)에서 n번째 계단까지 도착할 수 있는 방법의 가짓수를
# 출력하시오. 예를 들어, 1번째 계단에 도착하는 방법은 1가지 뿐이고, 
# 2번째 계단에 도착하는 방법은 2가지(1개-1개 뛰기, 2개 뛰기),
# 3번째 계단에 도착하는 방법은 4가지(1개-1개-1개, 1개-2개, 2개-1개, 3개)이다.
# 0번째 계단에서 시작해서 한 번에 1개/2개/3개의 계단을 뛰어넘을 수 있을 때,
# n번째 계단에 도착할 수 있는 방법의 가짓수를 출력한다.
# method 1 with memoization
n = int(input())
d = [0] * 1000
def jumpStair(n):
    if n == 1:
        d[n] = 1
        return d[n]
    elif n == 2:
        d[n] = 1 + jumpStair(n-1)
        return d[n]
    elif n == 3:
        d[n] = 1 + jumpStair(n-1) + jumpStair(n-2)
        return d[n]
    else:
        d[n] = jumpStair(n-1) + jumpStair(n-2) + jumpStair(n-3)
        return d[n]
print(jumpStair(n))