# 스케줄 정리(schedule arrangement)
# 순서없이 적힌 스케줄 메모가 있다. 메모는 스케줄명, 연, 월, 일 의 형태로
# 구성되어 있다. 이 메모를 토대로 날짜가 빠른 순서로 정렬하여 출력하고자 한다.
# 만약 날짜가 동일한 경우 스케줄명의 사전식 순서로 오름차순 정렬한다.
# 첫째줄에 데이터의 개수 n이 입력된다.(1<=n<=100) 그 다음줄부터 n개의 데이터가
# 스케줄명, 년, 월, 일 형태로 한 줄에 하나씩 입력된다. 스케줄명은 공백없이
# 알파벳소문자 99글자 이하, 년월일은 유효한 날짜만 입력된다.
# 가장 먼저 해야 할 스케줄명부터 정렬하여  출력한다.
# method 1
n = int(input())
sc = []
for i in range(n):
    scname, y, m, d = input().split()
    y = int(y)
    m = int(m)
    d = int(d)
    sc.append([scname, y, m, d])
sc = sorted(sc, key=lambda x : (x[1], x[2], x[3], x[0]))
for i in range(n):
    print(sc[i][0])