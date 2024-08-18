a,b=map(int,input().strip().split(' '))
# method1 with * for string
# for i in range(b):
#     print('*'*a)
# method2 without * for string
for i in range(b):
    for j in range(a):
        print('*',end='')
    print()