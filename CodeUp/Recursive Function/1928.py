# (재귀함수) 우박수(Collatz conjecture 콜라츠 추측) (3n+1) (basic)
# 콜라츠의 추축, 3n + 1 문제, 우박수 문제라고 불리는 이 문제는 다음과 같다.
# 1. 어떤 자연수 n이 입력되면, 2. n이 홀수이면 3n + 1을 하고,
# 3. n이 짝수이면 n/2를 한다. 4. n이 1이 될때까지 2, 3 과정을 반복한다.
# 예를 들어 5는 5 -> 16 -> 8 -> 4 -> 2 -> 1 이 된다.
# 이처럼 어떤 자연수 n이 입력되면 위 알고리즘에 의해 1이 되는 과정을 모두
# 출력하시오.
# method 1
d = int(input())
t = 0
def colla(n):
    print(n)
    if n == 1:
        return
    elif n % 2 == 1:
        colla(3*n+1)
    else:
        colla(n//2)
colla(d)