def solution(a, b, c, d):
    # answer=0
    # method1
    # d_list=sorted([a,b,c,d])
    # print(d_list)
    # if d_list[0]==d_list[3]:
    #     answer=1111*d_list[0]
    # elif d_list[0]==d_list[2] or d_list[1]==d_list[3]:
    #     p=d_list[1]
    #     q=d_list[3]+d_list[0]-d_list[1]
    #     answer=(10*p+q)**2
    # elif d_list[0]==d_list[1] and d_list[2]==d_list[3]:
    #     answer=(d_list[0]+d_list[2])*abs(d_list[0]-d_list[2])
    # elif d_list[0]==d_list[1]:
    #     answer=d_list[2]*d_list[3]
    # elif d_list[1]==d_list[2]:
    #     answer=d_list[0]*d_list[3]
    # elif d_list[2]==d_list[3]:
    #     answer=d_list[0]*d_list[1]
    # else:
    #     answer=d_list[0]
    # method2
    # l=sorted([a,b,c,d])
    # c=[l.count(t) for t in l]
    # if max(c)==4:
    #     answer=1111*l[0]
    # elif max(c)==3:
    #     answer=(10*l[c.index(3)]+l[c.index(1)])**2
    # elif max(c)==2:
    #     if min(c)==1:
    #         answer=eval('*'.join(str(l[i]) for i,x in enumerate(c) if x==1))
    #     else:
    #         answer=(max(l)+min(l))*abs(max(l)-min(l))
    # else:
    #     answer=l[0]
    # method3
    l=sorted([a,b,c,d])
    c=[l.count(t) for t in l]
    r={4:1111*l[0],
            3:(10*l[c.index(max(c))]+l[c.index(min(c))])**2,
            2:eval('*'.join(str(l[i]) for i,x in enumerate(c) if x==1))
            if min(c)==1 else max(l)**2-min(l)**2,
            1:l[0]}.get(max(c),0)                                                                     
    return r