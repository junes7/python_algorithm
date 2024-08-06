def solution(ineq, eq, n, m):
    answer=int(n>m if ineq=='>' else n<m) if eq=='!' else int(n>=m if ineq=='>' else n<=m)
    return answer