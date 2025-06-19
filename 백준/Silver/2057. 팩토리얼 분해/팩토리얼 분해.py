import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
fact = [1, 1]
for i in range(2, 21):
    fact.append(fact[i-1]*i)
sum = 0
for i in range(20, -1, -1):
    if sum+fact[i] < n:
        sum += fact[i]
    elif sum+fact[i] == n:      # 누적 합이 정수 n과 같은 경우
        print("YES")
        exit(0)
print("NO")