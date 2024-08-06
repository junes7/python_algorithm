def solution(n):
    answer = 0
    for i in range(1 if n%2==1 else 2,n+1,2):
        answer+=i if n%2==1 else i**2
    return answer