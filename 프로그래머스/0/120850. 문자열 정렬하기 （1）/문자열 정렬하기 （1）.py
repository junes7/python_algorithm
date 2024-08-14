def solution(my_string):
    r=sorted([int(c) for c in my_string if 48<=ord(c) and ord(c)<=57])
    return r