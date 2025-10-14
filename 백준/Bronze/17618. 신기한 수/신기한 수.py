import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
res = 0
for number in range(1, n+1):
    tmp = str(number)
    digit_sum = 0
    for i in tmp:
        digit_sum += int(i)
    if number % digit_sum == 0:
        res += 1
print(res)