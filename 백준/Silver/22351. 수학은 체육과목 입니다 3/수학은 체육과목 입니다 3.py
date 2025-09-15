def Nunber(N):
    length = len(N)
    A_lst = [int(N[0]), int(N[:2]), int(N[:3])] 
        # A가 한자리, 두자리, 세자리 수일 때
    for A in A_lst:                             
        B = A
        new_num = ''
        while len(new_num) < length:
            new_num += str(B)
                # 첫 숫자에서 부터 1씩 더해 붙이며 새로운 숫자 생성
            if new_num == N:
                # 새로만든 숫자가 입력된 숫자와 같을 경우 결과 출력
                return A, B
            B += 1 
    return N, N
N = input()
print(*Nunber(N))