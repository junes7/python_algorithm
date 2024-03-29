# 미분과 적분(differential and integral)
# 미적분은 고등학교 2학년에 나오는 과정이다. 이제 어른이 된 성현이는 실수로
# 타임머신을 타고 자신의 고등학생 모습으로 가게 되었다. 성현이는 자기 자신이
# 미적분을 하는 것을 도와주고 싶다. 미적분의 많은 내용이 있지만, 기본적으로
# 이것만 알아 두자. x^n을 미분하면 n∗x^(n−1)이 된다. 적분은 미분의 반대이다.
# (n+1)∗x^n을 적분하면 x^(n+1)+c가 된다. (c는 임의의 상수이다.) 우리가
# 성현이를 도와주자.
# 미적분 해야 되는 식의 수가 n으로 주어진다. (1<=n<=5)
# 다음 n줄에는 각 식이 주어진다. 단, 모든 계수는 1이라도 ∗가 붙여저 출력.
# 각 식의 길이는 최대 99이다. 적분하여 분수가 되는 식은 주어지지 않는다.
# 또한, 상수항은 입력되지 않는다. 모든 계수는 9이하이고 1이상이다.
# method 1
n = int(input())
d = []
l, t = 0, 0 
for i in range(n):
    d.append(input())
for i in range(len(d)):
    s1, s2 = '', ''
    for j in range(len(d[i])):
        if d[i][j] == '*' and d[i][j+2] == '^':
            l = int(d[i][j-1])
            t = int(d[i][j+3])
            s1 = s1 + (str(l * t) + '*x^' + str(t-1))
            s2 = s2 + (str(l // (t+1)) + '*x^' + str(t+1))
        elif d[i][j] == '+':
            s1 = s1 + d[i][j]
            s2 = s2 + d[i][j]
    s2 = s2 + '+c'
    print(s1, s2)