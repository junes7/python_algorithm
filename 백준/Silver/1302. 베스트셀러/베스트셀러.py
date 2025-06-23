import sys
input=lambda:sys.stdin.readline().rstrip()
n,dic=int(input()),{}
for _ in range(n):
    st=input()
    dic[st]=1 if st not in dic.keys() else dic[st]+1
dic_sort=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
print(dic_sort[0][0])