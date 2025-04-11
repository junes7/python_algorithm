import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[]
t1=input()
arr+=[[*map(int,t1.split(":"))]]
t2=input()
arr+=[[*map(int,t2.split(":"))]]
st=arr[0][0]*3600+arr[0][1]*60+arr[0][2]
end=arr[1][0]*3600+arr[1][1]*60+arr[1][2]
rlt=end-st
if rlt<0:
    rlt+=24*3600
print(rlt)