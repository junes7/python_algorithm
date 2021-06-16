# 몇 번째 데이터 출력하기
# 첫 줄에 데이터의 개수 N이 입력, 그 다음 줄에 N개의
# 데이터가 입력. | 첫 번째, 중간, 마지막 데이터 출력
# method 1
n = int(input())
a = list(map(int, input().split()))
print(a[0], a[(n-1)//2], a[n-1])