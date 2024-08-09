def solution(num_list):
    answer = 0
    for n in num_list:
        cnt=0
        while n>1:
            n=n//2 if not n%2 else (n-1)//2
            cnt+=1
        answer+=cnt
    return answer