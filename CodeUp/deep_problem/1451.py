# 데이터 정렬(Data Sort) (Small)
# 데이터 정렬은 프로그래밍 문제를 푸는데 많이 사용된다.
# N개의 데이터가 입력되면, 오름차순된 결과를 출력하는 프로그램을 작성하시오.
# 첫째줄에 N이 입력된다. (1<=N<=10,000) 다음 줄부터 N개의 데이터가 한 줄에
# 한 개씩 입력된다. | 오름차순 정렬한 결과를 한 줄에 하나씩 순서대로 출력.
# method 1
n = int(input())
d = []
for i in range(n): 
    d.append(int(input()))
d.sort()
for i in range(len(d)):
    print(d[i])