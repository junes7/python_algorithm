def solution(s):
    r=''
    s=list(map(str,s.split(' ')))
    for i,c in enumerate(s):
        c=list(c)
        for j in range(len(c)):
            if not j%2:
                if 97<=ord(c[j]) and ord(c[j])<=122:
                    c[j]=chr(ord(c[j])-32)
            else:
                if 65<=ord(c[j]) and ord(c[j])<=90:
                    c[j]=chr(ord(c[j])+32)
        s[i]=''.join(c)   
    return ' '.join(s)