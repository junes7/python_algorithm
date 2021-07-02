# 5개의 데이터(print five data in reverse order)
# 5개의 데이터를 입력받아 거꾸로 출력하는 프로그램을 작성하시오.
# 5개의 숫자를 입력받는다. 입력되는 숫자는 100미만의 자연수이다.
# 입력받은 수를 역순으로 출력한다.
# method 1
d = list(map(int, input().split()))
for i in range(len(d)-1, -1, -1):
    print(d[i], end=' ')