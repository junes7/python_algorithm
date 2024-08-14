def solution(my_string):
    # method1
    # answer=my_string[::-1]
    # method2
    answer=''
    for i in range(len(my_string)-1,-1,-1):
        answer+=my_string[i]
    return answer