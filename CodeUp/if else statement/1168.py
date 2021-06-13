# 나이 계산 1(age calculator)
# 주민등록번호는 생년월일과 성별정보, 지역정보로 이루어진다.
# 성별 정보 1900년대생 중 1이면 남자, 2이면 여자
# 2000년대 출생 중 3이면 남자, 4이면 여자를 말한다.
bd, s = map(int, input().split())
sy = 2012
bdy = bd//10000
if s == 1 or s == 2:
    age = sy - (1900+bdy) + 1
else:
    age = sy - (2000+bdy) + 1
print(age)