def solution(str_list):
    d=['l','r']
    l=[]
    for i,c in enumerate(str_list):
        if c==d[0]:
            l=str_list[:i]
            break
        elif c==d[1]:
            l=str_list[i+1:]
            break     
    return l