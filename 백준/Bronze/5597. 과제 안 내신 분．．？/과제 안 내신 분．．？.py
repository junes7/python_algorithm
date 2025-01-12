num=[0]*31
absn=[0]*2
idx=0
for i in range(28):
    num[int(input())]=1
for i in range(1,31):
    if num[i]==0:
        absn[idx]=i
        idx+=1
for i in range(2):
    print(absn[i])