def solution(s):
    r=[]
    cnt,zcnt=0,0
    while int(s,2)!=1:
        cnt+=1
        zcnt+=s.count('0')
        s=len(str(s).replace('0',''))
        s=bin(s)[2:]
    r=[cnt,zcnt]
    return r