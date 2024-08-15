def solution(array):
    # method1 doule for statement without count
    r=sum([1 for n in array for i in str(n) if i=='7'])
    # method2 with count
    # r=str(array).count('7')
    return r