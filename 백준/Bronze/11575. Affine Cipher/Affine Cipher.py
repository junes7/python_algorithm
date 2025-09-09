import sys
input=lambda:sys.stdin.readline().rstrip()
T = int(input().strip())
for t in range(T):
    a, b = map(int, input().strip().split())
    text = list(input().strip())
    for i in range(len(text)):
        num = (a * (ord(text[i])-ord('A')) + b ) % 26
        text[i] = chr(num+ord("A"))
    print(''.join(text))