# 최댓값 구하기
# 입력의 개수 n 입력, n개의 데이터 입력. 
# 이 데이터 중 최댓값 출력
# method 1
# n = int(input())
# a = list(map(int, input().split()))
# a.sort()
# print(a[n-1])
# method 2
n = int(input())
a = list(map(int, input().split()))
max = 0
for i in range(n):
    if max < a[i]:
        max = a[i]
print(max)