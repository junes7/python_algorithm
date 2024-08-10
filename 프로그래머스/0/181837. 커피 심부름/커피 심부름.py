def solution(order):
    s=0
    for o in order:
        if o.startswith('ice') or o.endswith('ice'):
            s+=4500 if 'ame' in o else 5000
        elif o.startswith('hot') or o.endswith('hot'):
            s+=4500 if 'ame' in o else 5000
        elif o.startswith('ame') or o.startswith('any'):
            s+=4500
        else:
            s+=5000
    return s