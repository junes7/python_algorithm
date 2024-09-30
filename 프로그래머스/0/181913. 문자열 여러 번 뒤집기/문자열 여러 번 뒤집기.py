def solution(my_string, queries):
    for s,e in queries:
        temp=list(my_string[s:e+1])
        my_string=my_string[:s]+''.join(c for c in temp[::-1])+my_string[e+1:]
    r=my_string
    return r