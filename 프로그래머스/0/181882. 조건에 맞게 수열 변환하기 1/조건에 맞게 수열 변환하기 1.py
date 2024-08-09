def solution(arr):
    # method1
    # answer = []
    # for n in arr:
    #     if n>=50 and n%2==0:
    #         answer.append(n//2)
    #     elif n<50 and n%2!=0:
    #         answer.append(n*2)
    #     else:
    #         answer.append(n)
    # method2
    answer=[n//2 if n>=50 and not n%2 else n*2 if n<50 and n%2 else n for n in arr]
    return answer