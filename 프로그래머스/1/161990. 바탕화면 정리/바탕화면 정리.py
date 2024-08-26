def solution(wallpaper):
    w=wallpaper
    lx,ly,rx,ry=50,50,0,0
    for i in range(len(w)):
        for j in range(len(w[0])):
            if w[i][j]=='#':
                if lx>i:
                    lx=i
                if ly>j:
                    ly=j
                if rx<i:
                    rx=i
                if ry<j:
                    ry=j
    r=[lx,ly,rx+1,ry+1]
    return r