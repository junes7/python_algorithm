# 학번 출력하기(print studentID)
# input: grade, class, number output:  studentID
# 학년, 반, 번호를 입력받는다. 여기서 반이 홀수이면 학번을 한 번 출력하고, 짝수이면
# 학번을 두 번 출력하시오(학번 학번) <-- 이런 식
# 여기서 번호가 10번 미만이어도 그대로 출력한다.
# method 1
a, b, c = map(int, input().split())
if b % 2 == 1:
    print(a, b, c, sep='')
else:
    print(a, b, c, sep='', end=' ')
    print(a, b, c, sep='')