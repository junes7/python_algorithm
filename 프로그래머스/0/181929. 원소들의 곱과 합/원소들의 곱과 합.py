def solution(num_list):
    mul,sum=1,0
    for i in num_list:
        mul*=i
        sum+=i
    answer = 1 if mul<sum**2 else 0
    return answer