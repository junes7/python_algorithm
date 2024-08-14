def solution(rsp):
    r=''.join({'0':'5','2':'0','5':'2'}.get(c) for c in rsp)
    return r