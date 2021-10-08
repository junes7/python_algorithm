import collections;
v=[[1,4],[3,4],[3,10]];
v2=[[1,1],[2,2],[1,2]];
def solution(v):
    answer=[];
    for i in zip(*v):
        y=collections.Counter(i)
        answer.extend([i for i in y if y[i]==1])
    return answer
print(solution(v2));