def solution(code):
    r,mode='',0
    for i in range(len(code)):
        if code[i]=='1':
            mode^=1
        else:
            r+=code[i] if i%2==mode else ''
            
    return "EMPTY" if len(r)==0 else r
    # r=''.join(code.split('1'))[::2] or 'EMPTY'
    # return r