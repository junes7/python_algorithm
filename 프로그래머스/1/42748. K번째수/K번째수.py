def solution(array, commands):
    r=[]
    t=[]
    for n in commands:
        t=[]
        for i in range(n[0]-1,n[1]):
            t+=[array[i]]
        t.sort()
        r+=[t[n[2]-1]]
    return r