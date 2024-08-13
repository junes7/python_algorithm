def solution(my_string):
    # method1
    # answer=my_string.swapcase()
    # method2
    answer=''.join(c.upper() if c.islower() else c.lower() for c in my_string)
    return answer