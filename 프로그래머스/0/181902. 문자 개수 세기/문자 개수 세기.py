def solution(my_string):
    r=[0 for i in range(52)]
    for i in my_string:
        n=ord(i)-ord('A') if i.isupper() else ord(i)-ord('a')+26
        r[n]+=1
    return r