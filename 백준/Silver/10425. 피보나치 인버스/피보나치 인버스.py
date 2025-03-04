import sys
input=lambda:sys.stdin.readline().rstrip()
fibo,dict=[0,1],{}
for i in range(0,100000):
    fibo+=[fibo[i]+fibo[i+1]]
    dict[fibo[i+2]]=i+2
for _ in range(int(input())):
    print(dict[int(input())])