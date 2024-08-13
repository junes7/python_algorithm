def solution(num_list):
    # answer=num_list[::-1]
    ans=[]
    for i in range(len(num_list)-1,-1,-1):
        ans+=[num_list[i]]
    return ans