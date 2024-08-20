def solution(food):
    r=''
    for i in range(1,len(food)):
        if food[i]//2==0:
            continue
        else:
            r+=str(i)*(food[i]//2)
    return r+'0'+r[::-1]