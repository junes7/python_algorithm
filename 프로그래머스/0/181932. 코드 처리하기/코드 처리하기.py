def solution(code):
    answer,mode='',0
    for i in range(len(code)):
        if mode==0:
            if code[i]!='1':
                answer+=code[i] if i%2==0 else ''
            else:
                mode=1
        elif mode==1:
            if code[i]!='1':
                answer+=code[i] if i%2!=0 else ''
            else:
                mode=0
    return "EMPTY" if len(answer)==0 else answer