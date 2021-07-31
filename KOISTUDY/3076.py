# 정수 3개 입력받아 짝/홀 출력하기
# print even/odd of three integers
a=list(map(int,input().split()))
for i in range(len(a)):
    print('even' if a[i] % 2 == 0 else 'odd')