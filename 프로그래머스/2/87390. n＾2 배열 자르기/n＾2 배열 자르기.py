def solution(n, left, right):
    '''
    n의 범위가 10^7이기 때문에 범위대로 다 값을 넣으려고 하면 시간 초과가 발생합니다.
    범위를 left에서 right사이로 줄여 주어야 시간 초과가 발생 안 합니다.
    '''
    # 리스트 범위 설정
    r=[0]*(right-left+1)
    # 왼쪽에서 오른쪽까지 돌면서
    for i in range(left,right+1):
        '''
        몫과 나머지 중 가장 큰 값에 1을 더하면
        n*n행렬을 한 줄로 만들었을 때 범위의 값이 나오게 됩니다.
        인덱스는 0부터 시작하기에 left를 빼주어 shift해주었습니다.
        '''
        r[i-left]=max(i//n,i%n)+1
    return r