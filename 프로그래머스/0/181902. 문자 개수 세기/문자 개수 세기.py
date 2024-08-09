def solution(my_string):
    answer = [0 for i in range(52)]
    for i in my_string:
        n=ord(i)-ord('A') if i.isupper() else ord(i)-ord('a')+26
        answer[n]+=1
    return answer