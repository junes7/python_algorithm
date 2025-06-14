import sys
input=lambda:sys.stdin.readline().rstrip()
cnt,total=[0]*1001,0
for _ in range(10):
    num=int(input())
    total+=num
    cnt[num]+=1
print(total//10,cnt.index(max(cnt)),sep="\n")