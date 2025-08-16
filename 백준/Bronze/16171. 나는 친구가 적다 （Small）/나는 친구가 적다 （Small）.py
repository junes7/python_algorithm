import sys
input=lambda:sys.stdin.readline().rstrip()
S = list(input())
K = input()
new = []
# 알파벳 대문자 혹은 소문자일 때만 새로운 배열 new에 append
for s in S:
    if ord(s) >= 65 and ord(s) < 91:      # 알파벳 대문자인지 판별
        new.append(s)
    elif ord(s) >= 97 and ord(s) < 123:   # 알파벳 소문자인지 판별
        new.append(s)
new = ''.join(new)
if K in new:
    print(1)
else:
    print(0)