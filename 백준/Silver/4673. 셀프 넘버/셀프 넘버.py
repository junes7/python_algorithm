def func_d(num):
    for i in str(num):
        num+=int(i)
    return num
num=[1]*10001
for i in range(1,10001):
    if func_d(i) < 10001:
        num[func_d(i)]=0
for i in range(1,10001):
    if num[i]:
        print(i)