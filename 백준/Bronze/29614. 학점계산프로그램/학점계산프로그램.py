import sys
input=lambda:sys.stdin.readline().rstrip()
grd_dic={"A+":4.5,"A":4.0,"B+":3.5,"B":3.0,"C+":2.5,"C":2.0,"D+":1.5,"D":1.0,"F":0.0}
st,arr,total=input(),[],0
for i in range(len(st)-1):
    if st[i]=="+": continue
    arr+=[st[i]+"+" if st[i+1]=="+" else st[i]]
if st[len(st)-1]!="+":
    arr+=[st[len(st)-1]]
for i in range(len(arr)):
    total+=grd_dic[arr[i]]
print(total/len(arr))