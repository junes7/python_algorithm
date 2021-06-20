# 함수로 학점 리턴하기 (return grade through function)
# 90 이상 100 이하: A | 80 이상 90 미만: B | 70 이상 80 미만: C
# 60 이상 70 미만: D | 60 미만: F
# method 1
d = int(input())
def grade(n):
    if n >= 90:
        return 'A'
    elif n >= 80:
        return 'B'
    elif n >= 70:
        return 'C'
    elif n >= 60:
        return 'D'
    else:
        return 'F'
print('%c' % grade(d))