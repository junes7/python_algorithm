# 아로마 수(aroma number)
# 아로마 수는 ARA'R'...꼴로 구성되어 있다. 여기서 A는 가중치이고, R은 심볼을
# 의미한다. 심볼R의 각각의 값은 아래 표와 같다.
# Symbol	    I	V	X	L	C	D	M
# Base value	1	5	10	50	100	500	1000
# 보통 R >= R' 이면, 가중치를 곱해서 더한다. 하지만 R < R' 이면, 앞의 AR을
# 뺀다.
# 예제 1)  3M1D2C = 3*1000 + 1*500 + 2*100 = 3700
# 예제 2) 3X2I4X = 3*10 - 2*1 + 4*10 = 68
# 아로마 수의 값을 구하는 프로그램을 작성하시오.
# 2~20심볼을 가진 아로마수가 입력된다. | 아로마수를 10진수로 변환하시오.
# method 1
s = input()
a = []
r = []
rlt = 0
for i in range(len(s)):
    if s[i] == 'I':
        r.append(1)
    elif s[i] == 'V':
        r.append(5)
    elif s[i] == 'X':
        r.append(10)
    elif s[i] == 'L':
        r.append(50)
    elif s[i] == 'C':
        r.append(100)
    elif s[i] == 'D':
        r.append(500)
    elif s[i] == 'M':
        r.append(1000)
    else:
        a.append(int(s[i]))
for i in range(len(r)-1):
    if r[i] >= r[i+1]:
        rlt += a[i] * r[i]
    else: # r[i] < r[i+1]
        rlt -= a[i] * r[i]
rlt += a[len(a)-1] * r[len(r)-1]
print(rlt)