n=int(input())
for i in range(n):
    e=list(input().split('='))
    if eval(e[0])==int(e[1]):
        print('correct')
    else:
        print('wrong answer')