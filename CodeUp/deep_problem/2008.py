# 오름차순? 내림차순? 2 (Ascending? or Descending?)
# 숫자에 관심이 많은 영일이는 수열을 보고 오름차순 수열인지 내림차순 수열인지
# 판단하려고 한다. 오름차순이란 작은 수부터 큰 수 순서로 나열한것을 말하고,
# 내림차순은 그 반대인 경우이다. 이 두 경우가 아닌 경우는 '섞임'으로 판단.
# n개의 수가 주어지면, '오름차순', '내림차순', '섞임'을 판단하는 프로그램을
# 작성하시오. 예를 들어, 1 1 2 3 5 5 6인 경우 '오름차순', 7 6 6 5 3 1인
# 경우 '내림차순',  21 22 21 22인 경우 '섞임'으로 판단한다.
# 만약 모두 같은 수가 입력되면 '섞임'으로 판단한다.
# 첫째 줄에 데이터의 개수 n이 주어진다. (2≤n≤100)
# 둘째 줄에 n개의 수가 공백으로 분리되어 입력된다.(각각의 수는 1~200인 정수)
# 수의 순서가 오름차순인 경우 '오름차순', 내림차순인 경우 '내림차순', 둘 다
# 아닐 경우 '섞임'을 출력한다.
# method 1
n = int(input())
d = list(map(int, input().split()))
f = []
b = []
cntF = []
cntB = []
rltF, rltB = 0, 0
for i in range(len(d)):
    f.append(d[i])
    b.append(d[i])
f.sort()
b.sort(reverse=True)
for i in range(len(d)):
    cntF.append(d[i]-f[i])
for i in range(len(d)):
    cntB.append(d[i]-b[i])
for i in range(len(cntF)):
    if cntF[i] != 0:
        rltF = 1
        break
    else:
        continue
for i in range(len(cntB)):
    if cntB[i] != 0:
        rltB = 1
        break
    else:
        continue
if rltF == 0 and rltB == 1:
    print('오름차순')
elif rltF == 1 and rltB == 0:
    print('내림차순')
else:
    print('섞임')