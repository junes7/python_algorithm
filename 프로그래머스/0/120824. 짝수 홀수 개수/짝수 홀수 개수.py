def solution(num_list):
    l=[0]*2
    for n in num_list:
        l[n%2]+=1
    return l