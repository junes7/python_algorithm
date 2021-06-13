# 당신의 학번은? 1
# 학번을 입력 받아 다음 형식으로 출력하시오.
# 학번은 학년, 반, 번호로 입력된다.
g, c, n = map(int, input().split())
ug = g*1000 + c*100 + n
print(ug)