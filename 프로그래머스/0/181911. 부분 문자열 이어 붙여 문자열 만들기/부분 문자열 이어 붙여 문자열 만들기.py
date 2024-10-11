def solution(my_strings, parts):
    # r=''.join(my_strings[i][s:e+1] for i,(s,e) in enumerate(parts))
    r=''
    for i,(s,e) in enumerate(parts):
        r+=my_strings[i][s:e+1]
    return r