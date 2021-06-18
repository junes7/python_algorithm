# 거꾸로 출력하기 3(Output Upside Down)
# 두 수를 거꾸로 출력하기. 세 수를 거꾸로 출력하기
# 이번에는 데이터의 개수가 n개가 들어오고, n개의 데이터를 거꾸로 출력하는
# 프로그램을 작성하시오. 첫 줄에 데이터 개수 n, 둘째 줄에 n개 데이터 입력
# method 1
n = int(input())
a = input().split()
for i in range(n-1, -1, -1):
    print(a[i], end=' ')