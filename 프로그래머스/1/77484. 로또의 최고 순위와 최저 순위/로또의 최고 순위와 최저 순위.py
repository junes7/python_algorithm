def solution(lottos, win_nums):
    rank={6:1,5:2,4:3,3:4,2:5}
    z,o,l=0,0,len(lottos)
    for n in lottos:
        if n>0 and n not in win_nums:
            o+=1
        elif n==0:
            z+=1
    r=[rank.get(l-o,6),rank.get(l-z-o,6)]
    return r