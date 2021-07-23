# 기억력 테스트 7(memory test)
# 주현이 엄마는 '기억력 테스트 6'이 너무 가혹해서인지 이번에는 좀 쉬운 테스트를
# 하기로 했다. 이번에도 n개의 숫자를 불러 주고, m개의 질문을 한다. 질문은 두
# 수 a, b를 이야기 하는데, a번째와 b번째 사이에 불렀던 수들의 합을 묻는다.
# 예를 들어, 3 5 2 1 4 3 의 숫자를 불러주고, 2, 4라고 질문하면 2번째에서
# 4번째 불렀던 숫자들의 합인 8을 대답해야한다. 이번 테스트를 무사히 통과하면
# '닌자 고'의 4종 캐릭터 장난감을 받을 수 있다.
# 첫째 줄에 n과 m이 입력된다.(1 <= n <= 1,000,000), (1 <= m <= 100,000)
# 둘째 줄에 n개의 정수가 공백으로 분리되어 입력된다.
# (입력수의 범위 : -1,000 ~ 1,000)
# 셋째 줄부터 m개의 질문이 입력되는데, 시작수 a와 마지막 수 b가 입력된다.
# ( 1 <= a <= b <= n )
# 질문의 순서대로 각 줄에 a번째와 b번째 사이에 불렀던 수들의 합을 출력한다.
# method 1 with memoization
import sys
input = sys.stdin.readline
n, m = map(int, input().split())
d = list(map(int, input().split()))
ab = [[0] * 2 for i in range(m)]
mem = [0] * n
rlt = 0
for i in range(m):
    ab[i][0], ab[i][1]= map(int, input().split())
for i in range(n):
    rlt += d[i]
    mem[i] = rlt
for i in range(m):
    if ab[i][0] < 2:
        sys.stdout.write(str(mem[ab[i][1]-1]))
    else:
        t = mem[ab[i][1]-1] - mem[ab[i][0]-2]
        sys.stdout.write(str(t))
    sys.stdout.write("\n")