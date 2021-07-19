# 계단 오르기 1(Climbing Stairs)
# 영일(01)이는 n개의 계단을 오르려고 한다.
# 영일이는 다리가 짧아 계단을 오를 때 한 번에 1계단 또는 2계단만 오를 수
# 있다. 영일이가 n번째 계단에 도달할 수 있는 방법의 수를 구하시오.
# 예를 들어 n=3인 경우, 1−1−1 , 1−2 , 2−1 , 이렇게 3가지 방법이 있다.
# 1 -> 1
# 2 -> 2
# 3 -> 3
# 4 -> 5
# method 1
n = int(input())
def climbStairs(n):
    if n == 1:
        return 1
    elif n == 2:
        return 2
    else:
        return climbStairs(n-1) + climbStairs(n-2)
print(climbStairs(n))