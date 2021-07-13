# 잉여계 (Factor System)
# 두 정수 a, b에 대하여 a - b가 정수 m으로 나누어 떨어질때
# "a, b는 법 m에 대하여 합동이다."라고 한다. 또한 정수 전체의 집합 Z의
# 부분집합 A와 정수 m에 대하여 집합 A의 임의의 두 원소가 항상 법 m에
# 대하여 합동이 아니면 "집합 A는 법 m에 대한 잉예계이다."라고 한다.
# 집합 A와 정수 m이 주어질 때, 집합 A가 법 m에 대한 잉여계인지 판단하는
# 프로그램을 작성하시오.
# 첫째 줄에 집합 A의 원소의 개수 n이 입력된다. (1<=n<=150)
# 둘째 줄에 집합 A의 원소가 공백을 두고 입력된다. (각 원소는 1 이상
# 10,000 이하) | 셋째 줄에 정수 m이 입력된다. (n <= m <= 1,000)
# 집합 A가 정수 m에 대한 잉여계이면 "yes", 아니면 "no"를 출력하시오.
# method 1
n = int(input())
d = list(map(int, input().split()))
m = int(input())
cnt = 0
if n == 1:
    cnt += 0
elif n > m:
    cnt += 1
else:
    for i in range(len(d)):
        t = d[i]
        for j in range(i+1, len(d)):
            if abs(t - d[j]) % m == 0:
                cnt += 1
            elif abs(t - d[j]) % m != 0:
                continue
if cnt>=1:
    print("no")
else:
    print("yes")