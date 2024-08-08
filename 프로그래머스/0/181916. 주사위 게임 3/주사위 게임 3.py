def solution(a, b, c, d):
    answer=0
    d_list=sorted([a,b,c,d])
    if d_list[0]==d_list[3]:
        answer=1111*d_list[0]
    elif d_list[0]==d_list[2] or d_list[1]==d_list[3]:
        p=d_list[1]
        q=d_list[3]+d_list[0]-d_list[1]
        answer=(10*p+q)**2
    elif d_list[0]==d_list[1] and d_list[2]==d_list[3]:
        answer=(d_list[0]+d_list[2])*abs(d_list[0]-d_list[2])
    elif d_list[0]==d_list[1]:
        answer=d_list[2]*d_list[3]
    elif d_list[1]==d_list[2]:
        answer=d_list[0]*d_list[3]
    elif d_list[2]==d_list[3]:
        answer=d_list[0]*d_list[1]
    else:
        answer=d_list[0]
    return answer