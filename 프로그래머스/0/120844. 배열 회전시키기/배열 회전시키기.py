def solution(numbers, direction):
    # method1 인덱스 위치에 맞게 값 변경
    # n=[0]*len(numbers)
    # for i in range(len(numbers)):
    #     if direction=='right':
    #         if i==len(numbers)-1:
    #             n[0]=numbers[i]
    #         else:
    #             n[i+1]=numbers[i] 
    #     else:
    #         if i==0:
    #             n[len(numbers)-1]=numbers[i]
    #         else:
    #             n[i-1]=numbers[i]
    # method2 slice 함수
    # n=[numbers[-1]]+numbers[:-1] if direction=='right' else numbers[1:]+[numbers[0]]
    # method3 rotate 함수
    # from collections import deque
    # n=deque(numbers)
    # n.rotate(1) if direction=='right' else n.rotate(-1)
    # n=list(n)
    # method4 pop 함수
    n=[numbers.pop()]+numbers if direction=='right' else numbers+[numbers.pop(0)]
    return n