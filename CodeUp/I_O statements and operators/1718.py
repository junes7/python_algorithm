# 분자량 구하기 2(Get Molecular weight)
# 분자량 구하기 1에서 만든 프로그램을 광곽의 화학선생님 HJ 선생님께 보여드렸다.
# 하지만 선생님께서는 1을 표시하는 것은 화학에서 맞지 않다고 하여 1을 입력하는
# 것을 없애라 하셨다. (즉, C_1 H_1이 아닌 C H로 입력된다.)
# 화학식은 C_X H_y의 꼴로 입력된다. C의 원자량은 12, H의 원자량은 1로 한다.
# 화학식이 C_X H_y의 꼴로 입력된다. 단, x, y = 1인 경우는 숫자를 생략한다.
# method 1
st = input()
s = 0
a = []
b = []
c, d = 0, 0
for i in range(len(st)):
    t = 1
    if st[i] == 'H' and st[i-1] == 'C':
        if i+1 == len(st):
            c, d = 1, 1
        else:
            c = 1
            for j in range(i+1, len(st)):
                b.append(int(st[j]))
            for k in range(len(b)-1, -1, -1):
                d += b[k] * t
                t *= 10
    elif st[i] == 'H' and st[i-1] != 'C':
        if i+1 == len(st):
            for j in range(1, i):
                a.append(int(st[j]))
            for k in range(len(a)-1, -1, -1):
                c += a[k] * t
                t *= 10
            d = 1
        else:
            for j in range(1, i):
                a.append(int(st[j]))
            for j in range(i+1, len(st)):
                b.append(int(st[j]))
            for k in range(len(a)-1, -1, -1):
                    c += a[k] * t
                    t *= 10
            t = 1
            for k in range(len(b)-1, -1, -1):
                    d += b[k] * t
                    t *= 10
s = 12 * c + 1 * d
print(s)