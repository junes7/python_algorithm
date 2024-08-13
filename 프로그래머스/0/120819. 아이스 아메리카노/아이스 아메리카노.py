def solution(money):
    # method1
    # answer=[money//5500,money%5500]
    # method2
    answer=list(divmod(money,5500))
    return answer