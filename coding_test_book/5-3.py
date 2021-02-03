# recursive function
def recursive_function(i):
    # index가 100일때 재귀를 멈추고 함수를 나가게 해준다.
    if i == 100:
        return
    print(i, '번째 재귀 함수에서', i+1, '번째 재귀 함수를 호출합니다.')
    recursive_function(i+1)
    print(i, '번째 재귀 함수를 종료합니다.')

recursive_function(1)