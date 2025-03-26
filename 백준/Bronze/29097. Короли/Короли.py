import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k,a,b,c=map(int,input().split())
arr=sorted([(a*n,"Joffrey"),(b*m,"Robb"),(c*k,"Stannis")],reverse=True)
t=arr[0][0]
st=[]
for i in range(3):
    if arr[i][0]==t:
        st+=[arr[i][1]]
st.sort()
print(*st)