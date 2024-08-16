def solution(spell, dic):
    # method1 포함 횟수와 길이 비교
    # r=2
    # for c in dic:
    #     s=0
    #     for i in spell:
    #         if i in c:
    #             s+=1
    #     if s==len(spell):
    #         r=1
    #         break
    # method2 set함수 이용
    r,s=2,set(spell)
    for c in dic:
        if not s-set(c):
            r=1
            break
    return r