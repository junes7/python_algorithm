def solution(s):
    n={'zero':'0','one':'1','two':'2','three':'3','four':'4','five':'5','six':'6','seven':'7','eight':'8','nine':'9'}
    for c in n:
        if c in s:
            s=s.replace(c,n.get(c))
    return int(s)