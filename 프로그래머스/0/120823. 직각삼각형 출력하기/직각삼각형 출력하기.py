n=int(input(),10)
# method1 double for statement
# for i in range(1,n+1):
#     for j in range(i):
#         print('*',end='')
#     print()
# method2 single for statement
# for i in range(1,n+1):
#     print('*'*i)
# method3 join function
print('\n'.join('*'*i for i in range(1,n+1)))