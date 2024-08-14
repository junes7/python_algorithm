def solution(rsp):
    r=''.join(str({0:5,2:0,5:2}.get(int(c))) for c in rsp)
    print(r)
    return r