# 삼각형 판단하기(Determine triangle)
# 삼각형 3변의 길이 a, b, c가 입력으로 주어진다.
# 여기서 입력되는 변의 관계는 a ≤ b ≤ c 이다.
# 그 삼각형이 무슨 삼각형인지 출력하시오.
# 세 변의 길이가 같은 경우: 정삼각형
# 두 변의 길이가 같은 경우: 이등변삼각형
# a² + b² = c²일 경우(피타고라스 정리): 직각삼각형
# 위의 조건에 맞지 않는 일반 삼각형의 경우: 삼각형
# 삼각형이 아닐 경우: 삼각형 아님 을 출력한다.
# method 1
a, b, c = map(int, input().split())
if a + b > c:
    if a == b and b == c:
        print('정삼각형')
    elif a == b or b == c or c == a:
        print('이등변삼각형')
    elif a * a + b * b == c * c:
        print('직각삼각형')
    else:
        print('삼각형')
else:
    print('삼각형아님')