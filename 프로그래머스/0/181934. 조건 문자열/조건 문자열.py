def solution(ineq, eq, n, m):
    r=int(eval(f"{n}{ineq}{eq.replace('!','')}{m}"))
    return r