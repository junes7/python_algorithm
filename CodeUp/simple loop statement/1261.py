# First Special Judge (Test)
# 10개의 수가 입력된다. 그 중 5의 배수를 하나만
# 출력한다. 만약 5의 배수가 없다면 0을 출력한다.
# method 1
n = list(map(int, input().split()))
s = 0
for i in range(len(n)):
    if n[i] % 5 == 0:
        s = n[i]
        break
    else:
        s = 0
print(s)