def solution(numbers, direction):
    r=[0]*len(numbers)
    for i,n in enumerate(numbers):
        if direction=='right':
            if i==len(numbers)-1:
                r[0]=numbers[i]
            else:
                r[i+1]=numbers[i] 
        else:
            if i==0:
                r[len(numbers)-1]=numbers[i]
            else:
                r[i-1]=numbers[i]   
    return r