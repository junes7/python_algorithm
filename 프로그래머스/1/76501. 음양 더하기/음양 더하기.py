def solution(absolutes, signs):
    for i,s in enumerate(signs):
        if s==False:
            absolutes[i]=-absolutes[i]
    return sum(absolutes)