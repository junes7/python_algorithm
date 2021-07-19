# 악성 프로그램 설치하기(pick installed malware)
# 현준이는 컴퓨터 인터넷이 느린 것을 알고, 제어판에 들어가 보니 여러 악성
# 프로그램이 설치 되어 있었다. 현준이 컴퓨터 인터넷이 빨라지도록 도와주기
# 위해 제어판에 있는 프로그램을 입력하면 악성 프로그램과, 컴퓨터의 위험도를
# 출력하는 프로그램을 작성하시오.
# 첫째 줄에 프로그램이 입력될 갯수 정수 n이 입력된다.(1<=n<=100)
# 둘째 줄부터 n줄에 걸쳐 프로그램명인 문자열이 입력.(글자 수:50글자 이내)
# 1. 악성 프로그램인지 아닌지 확인하는 방법 :
#   가. 프로그램명이 3글자 이하면 악성 프로그램이다.
#   나. 프로그램명에 tap이 들어가면 악성 프로그램이다.
#   다. 프로그램명에 xocure이 들어가면 악성 프로그램이다.
# 2. 컴퓨터의 위험도 출력 방법 :
#   가. 입력된 프로그램명 중에서 악성 프로그램 수가 0~3개이면 safe,
#   나. 악성 프로그램 수가 4~6개이면 warning,
#   다. 악성 프로그램 수가 7개 이상이면 danger을 출력하시오.
# method 1
n = int(input())
d = []
for i in range(n):
    d.append(input())
cnt = 0
for i in range(n):
    if len(d[i]) <= 3:
        print(d[i])
        cnt += 1
    else:
        if 'tap' in d[i] or 'xocure' in d[i]:
            print(d[i])
            cnt += 1
if cnt <= 3:
    print('safe')
elif cnt >= 4 and cnt <= 6:
    print('warning') 
else:
    print('danger')