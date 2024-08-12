def solution(p, k):
    # method1
    answer = []
    for i in range(len(p)):
        t=''
        for j in range(len(p[i])):
            t+=p[i][j]*k
        for _ in range(k):
            answer.append(t)
    # method2
    answer=[]
    for i in range(len(p)):
        answer+=[p[i].replace('.','.'*k).replace('x','x'*k)]*k
    return answer