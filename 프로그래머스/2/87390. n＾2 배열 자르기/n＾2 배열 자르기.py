def solution(n, left, right):
    '''
    n의 범위가 10^7이기 때문에 범위대로 다 값을 넣으려고 하면 시간 초과가 발생합니다.
    범위를 left에서 right사이로 줄여 주어야 시간 초과가 발생 안 합니다.
    '''
    r=[0]*(right-left+1)
    for i in range(left,right+1):
        r[i-left]=max(i//n,i%n)+1
    return r