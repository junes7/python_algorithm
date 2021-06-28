# 바이러스 백신(Virus Vaccine)
# 최근 무서운 감기 바이러스들이 유행처럼 번지고 있다. 최근 유행인 바이러스는
# 모두 3가지 종류로 각 바이러스들은 모두 3000이하의 자연수로 표현된다. 여러분은
# 3가지 바이러스 감염을 예방할 수 있는 백신을 개발해야 한다. 백신도 3000 이하의
# 자연수로 표현되며, 만약 바이러스의 값이 백신의 값으로 나누어 떨어지면 백신으로
# 바이러스 감염을 예방할 수 있다. 백신의 개발비는 백신의 숫자 값이 작을수록 비싸다.
# 즉 백신 3과 백신 2가 있다면 백신 3의 가격이 더 저렴하므로 개발하는데 이득이다.
# 3가지 바이러스 감염을 예방할 수 있는 가장 싼 백신을 개발하는 프로그램을 작성.
# 세 정수값이 오름차순으로 입력, 각 입력 값은 바이러스 번호 의미, 1~3000 정수
# 가장 값싼 백신의 번호를 출력한다(번호가 클수록 백신의 가격은 쌈). -> GCD?
# method 1
vi_a, vi_b, vi_c = map(int, input().split())

def vac_min(vi_a, vi_b, vi_c):
    if vi_a == 1 or vi_b == 1 or vi_c == 1:
        return 1
    elif vi_a == vi_b and vi_b == vi_c:
        return vi_a
    else:
        d = []
        for i in range(1, vi_a+1):
            if vi_a % i == 0:
                d.append(i)
        for j in range(len(d)-1, -1, -1):
            if vi_b % d[j] == 0 and vi_c % d[j] == 0:
                return d[j]
print(vac_min(vi_a, vi_b, vi_c))