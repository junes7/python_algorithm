def solution(my_string):
    s=my_string.split()
    r=int(s[0])
    for i in range(1,len(s),2):
        if s[i]=='+':
            r+=int(s[i+1])
        else:
            r-=int(s[i+1])
    return r