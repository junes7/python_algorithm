def solution(numbers):
    l=len(numbers)
    answer=max([numbers[i]*numbers[j] for i in range(l) for j in range(i+1,l)])
    return answer