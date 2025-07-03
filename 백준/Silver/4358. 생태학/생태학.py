import sys
input=lambda:sys.stdin.readline().rstrip()
dic,cnt={},0
while 1:
    st=input()
    if st=="": break
    cnt+=1
    if st in dic:
        dic[st]+=1
    else:
        dic[st]=1
dic_sort=sorted(dic.items(),key=lambda x:x[0])
for key,val in dic_sort:
    print("%s %.4f" % (key,val/cnt*100))