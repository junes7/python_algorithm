import sys
input=lambda:sys.stdin.readline().rstrip()
seminar=[]
for _ in range(7):
    sbj,num=input().split()
    seminar+=[(sbj,int(num))]
seminar=sorted(seminar,key=lambda x:(x[1],x[0]),reverse=True)
print(seminar[0][0])