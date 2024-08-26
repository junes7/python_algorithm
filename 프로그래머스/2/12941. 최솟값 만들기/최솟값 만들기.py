def solution(A,B):
    # A는 오름차순 B는 내림차순 정렬
    A.sort()
    B.sort(reverse=True)
    r=0
    # 인덱스 순으로 각각 곱해주면 최솟값 생성
    for i in range(len(A)):
        r+=A[i]*B[i]
    return r