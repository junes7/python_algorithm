# 10진수를 2진수로
# convert from decimal to binary
# 사용자에게 숫자를 입력받아 이를 2진수를 바꾸고
# 그 값을 출력
n=int(input())
t,b=1,0
while n!=0:
    b+=(n%2)*t
    t*=10
    n//=2
print(b)