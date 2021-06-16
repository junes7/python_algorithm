# 계산기 2(calculator)
# 이번에는 식을 입력하면 차례대로 계산하여 출력하는 계산기를 만들어보자.
f = input()
a = []
o = []
b = 0
for i in range(len(f)):
    if f[i] == '=' or f[i] == '+' or f[i] == '-' or f[i] == '*' or f[i] == '/':
        t = int(f[b:i])
        a.append(t)
        c = ord(f[i])
        o.append(chr(c))
        b = i+1
s = a[0]
for i in range(len(o)):
    if o[i] == '=':
        break
    elif o[i] == '+':
        s += a[i+1]
    elif o[i] == '-':
        s -= a[i+1]
    elif o[i] == '*':
        s *= a[i+1]
    elif o[i] == '/':
        s //= a[i+1]
print(s)