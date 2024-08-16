def solution(A, B):
    r=0
    for i in range(len(A)):
        if A==B:
            break
        else:
            A=A[-1]+A[:-1]
            r+=1
    return -1 if A!=B else r