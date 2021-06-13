# 만능 휴지통(All-purpose trash can)
n = int(input())
a = n // 10
b = n % 10
c = (b * 10 + a) * 2
if c >= 100:
    c -= 100
if c <= 50:
    print(c, 'GOOD', sep='\n')
else:
    print(c, 'OH MY GOD', sep='\n')