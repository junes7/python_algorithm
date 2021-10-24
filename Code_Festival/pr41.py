# 소수판별(distinction prime number)
# 숫자가 주어지면 소수인지 아닌지
# 판별하는 프로그램 작성
n=int(input())
if n<=1:
    print('소수가 아닙니다.')
else:
    for i in range(2,n):
        if n%i==0:
            print('소수가 아닙니다.')
            break
    else:
        print('소수입니다.')
