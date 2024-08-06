def solution(ineq, eq, n, m):
    answer=int(eval(f"{n}{ineq}{eq.replace('!','')}{m}"))
    return answer