# 10명의 점수 평균(average score about ten people)
# 10명의 프로그래밍 점수를 입력받은 후, 점수의 평균을 구하여 평균보다 높은 사람과
# 낮은 사람이 각각 몇 명인지 구하는 프로그램을 작성하시오. (평균과 같은 사람은
# 평균보다 높은 사람에 포함시킨다.)
# 10명의 점수를 입력받는다.
# 첫 줄에 평균을 출력하고, 다음 줄에 평균이상인 사람의 수와 평균미만인 사람의 수를
# 출력한다. 평균은 소수 첫째자리까지 출력한다.
# method 1
d = list(map(int, input().split()))
s = 0
for i in range(len(d)):
    s += d[i]
avg = s/10.0
print(avg)
cnt1, cnt2 = 0, 0
for i in range(len(d)):
    if d[i] >= avg:
        cnt1 += 1
    else:
        cnt2 += 1
print(cnt1, cnt2)