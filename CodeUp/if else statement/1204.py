# 영어 서수로 표현하기(express English ordinal number)
# method 1
n = int(input())
if 11 <= n and n <=13:
    print(n, 'th', sep='')
else:
    if n % 10 == 1:
        print(n, 'st', sep='')
    elif n % 10 == 2:
        print(n, 'nd', sep='')
    elif n % 10 == 3:
        print(n, 'rd', sep='')
    else:
        print(n, 'th', sep='')