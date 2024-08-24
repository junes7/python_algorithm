def solution(numbers, hand):
    # 검색을 빠르게 하기 위해 딕셔너리에 좌표값 설정
    kpad={1:(0,0),2:(0,1),3:(0,2),4:(1,0),5:(1,1),6:(1,2),7:(2,0),8:(2,1),9:(2,2),0:(3,1)}
    r=''
    lx,ly,rx,ry=3,0,3,2
    for n in numbers:
        if n in [1,4,7]:
            lx,ly=kpad[n]
            r+='L'
        elif n in [3,6,9]:
            rx,ry=kpad[n]
            r+='R'
        else:
            nx,ny=kpad[n]
            dl=abs(lx-nx)+abs(ly-ny)
            dr=abs(rx-nx)+abs(ry-ny)
            if dl==dr:
                if hand=='left':
                    lx,ly=nx,ny
                else:
                    rx,ry=nx,ny    
                r+='L' if hand=='left' else 'R'
            elif dl<dr:
                lx,ly=nx,ny
                r+='L'
            else: # dl>dr
                rx,ry=nx,ny
                r+='R'
    return r