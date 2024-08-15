def solution(num_list, n):
    r=[num_list[n*i:n*(i+1)] for i in range(len(num_list)//n)]
    return r