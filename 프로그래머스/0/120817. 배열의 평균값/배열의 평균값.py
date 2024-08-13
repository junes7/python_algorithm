def solution(numbers):
    # method1
    # answer=sum(numbers)/len(numbers)
    # method2
    import numpy as np
    answer=np.mean(numbers)
    return answer