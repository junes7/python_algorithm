def solution(str1, str2):
    r=0
    s1,s2=[],[]
    no,deno=0,0
    for i in range(0,len(str1)-1):
        if str1[i:i+2].isalpha():
            s1+=[str1[i:i+2].lower()]
    for j in range(0,len(str2)-1):
        if str2[j:j+2].isalpha():
            s2+=[str2[j:j+2].lower()]
    for e in set(s1+s2):
        no+=min(s1.count(e),s2.count(e))
        deno+=max(s1.count(e),s2.count(e))
    r=int(no/deno*65536) if deno else 65536
    return r