import sys
input=lambda:sys.stdin.readline().rstrip()
dic={0:'0010'}
for i in range(1,15):
    dic[i]=format(i,'04b')
for i in range(28-15):
    dic[15+i]=format(15-i,'04b')
T=int(input())
for _ in range(T):
    key=dic[int(input())%28].replace('0','V').replace('1','딸기')
    print(key)