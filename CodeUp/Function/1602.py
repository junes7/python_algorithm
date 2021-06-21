# 절대값 함수(absolute value function)
# 입력으로 정수가 들어오면 정수로 결과를 출력하고, 실수가 들어오면 실수로
# 결과를 출력한다. 단, 소수점 이하에 불필요한 0은 입력되지 않는다.
# method 1
n = float(input())
def ABS(d):
    return d * -1 if d < 0 else d
print('%.10g' % ABS(n))