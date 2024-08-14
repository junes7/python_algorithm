def solution(my_string):
    r=[]
    for c in my_string:
        if c not in r:
            r+=[c]
    return ''.join(r)