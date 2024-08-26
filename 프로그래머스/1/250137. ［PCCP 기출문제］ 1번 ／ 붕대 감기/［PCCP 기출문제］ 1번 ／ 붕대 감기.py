def solution(bandage, health, attacks):
    at,cnt=[],0
    for i in attacks:
        at+=[i[0]]
    cur_h=health
    for i in range(1,attacks[-1][0]+1):
        if i in at:
            cnt=0
            cur_h-=attacks[at.index(i)][1]
            if cur_h<=0:
                cur_h=-1
                break
        else:
            cnt+=1
            if cur_h>=health:
                cur_h=health
                continue
            else:
                if cnt==bandage[0]:
                    cnt=0
                    cur_h+=bandage[1]+bandage[2]
                    
                else:
                    cur_h+=bandage[1]
    return -1 if cur_h<=0 else cur_h