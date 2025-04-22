import sys
input=lambda:sys.stdin.readline().rstrip()
yun_list=[str(sum(map(int,input().split()))) for i in range(3)]
dic=dict(zip(list('32104'),list('ABCDE')))
for yun in yun_list:
    print(dic[yun])