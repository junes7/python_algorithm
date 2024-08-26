def solution(wallpaper):
    w=wallpaper
    # method1 without min,max function
    # lx,ly,rx,ry=50,50,0,0
    # for i in range(len(w)):
    #     for j in range(len(w[0])):
    #         if w[i][j]=='#':
    #             if lx>i:
    #                 lx=i
    #             if ly>j:
    #                 ly=j
    #             if rx<i:
    #                 rx=i
    #             if ry<j:
    #                 ry=j
    # r=[lx,ly,rx+1,ry+1]
    # method2 with min,max function
    l,r=[],[]
    for i in range(len(w)):
        for j in range(len(w[0])):
            if w[i][j]=='#':
                l+=[i]
                r+=[j]
    r=[min(l),min(r),max(l)+1,max(r)+1]
    return r