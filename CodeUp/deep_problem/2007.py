# 오름차순? 내림차순? 1 (Ascending? or Descending?)
# 성근이는 오름차순과 내림차순에 대한 공부를 하고있다. 어떤 수 n개가 주어지면
# 그 수열이 오름차순인지, 내림차순인지, 섞여 있는지 판단하시오.
# 첫째 줄에 데이터의 개수 n이 주어진다. (2 <= n <=100) 둘째 줄에 n개의 서로
# 다른 데이터 값이 공백으로 분리되어 입력된다.
# 데이터의 순서가 오름차순일 경우 "오름차순"을 출력, 내림차순일 경우
# "내림차순"을 출력, 둘 다 아닐 경우 "섞임"을 출력하시오.
# method 1
n = int(input())
d = list(map(int, input().split()))
cntF = []
cntB = []
rltF, rltB = 0, 0
f = []
b = []
for i in range(len(d)):
    f.append(d[i])
f.sort()
for i in range(n):
    cntF.append(d[i]-f[i])
for i in range(len(d)):
    b.append(d[i])
b.sort(reverse=True)
for i in range(n):
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