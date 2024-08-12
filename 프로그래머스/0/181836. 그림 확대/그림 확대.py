def solution(p, k):
    answer = []
    for i in range(len(p)):
        t=''
        for j in range(len(p[i])):
            t+=p[i][j]*k
        for j in range(k):
            answer.append(t)
    return answer