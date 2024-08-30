def solution(arr1, arr2):
    r=[]
    # arr1행의 길이만큼 돌면서
    for i in range(len(arr1)):
        # 2차원 배열 공간 추가
        r+=[[]]
        # arr2 열의 길이만큼 행렬 곱과 합을 해준 요소 넣어주기 위해 반복문 돌면서
        for k in range(len(arr2[0])):
            # 합을 넣을 임시 변수 초기화
            s=0
            '''
            arr1열의 길이와 arr2 행의 길이는 같으므로
            arr2행의 길이만큼 행렬 곱과 합 진행
            '''
            for j in range(len(arr1[i])):
                s+=(arr1[i][j]*arr2[j][k])
            # 합을 해당 배열 공간에 넣어줍니다.
            r[i]+=[s]
    return r