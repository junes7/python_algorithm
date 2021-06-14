# 등급 판정(grade decision)
# 시험 점수가 입력되면 등급을 출력하시오.
s = int(input())
if s >= 90:
    print('A')
elif s >= 80:
    print('B')
elif s >= 70:
    print('C')
elif s >= 60:
    print('D')
else:
    print('F')