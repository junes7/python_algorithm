def note(i):                # 문자열 만드는 함수
    global ans
    for j in range(w*i,w*(i+1)): # 노트를 문자열의 길이만큼 나눔
        for k in range(h):      
            if s[k][j]!='?':     # 나눈 부분 중에서 '?'가 아닌 문자가 있으면 그 문자를 더함
                ans+=s[k][j]
                return
    ans+='?'         # 모든 문자가 '?'이면 '?'를 더함
    return     
n,h,w=map(int,input().split())
s=[list(input()) for _ in range(h)]
ans=''                       
for i in range(n):
    note(i)
print(ans)