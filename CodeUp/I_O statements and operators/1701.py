# 세 정수 거꾸로 출력하기(print three integers backwards)
# 세 정수를 입력받아 입력받은 순서의 역순으로 출력하시오.
# method 1
a = list(map(int, input().split()))
for i in range(len(a)-1, -1, -1):
    print(a[i], end=' ')