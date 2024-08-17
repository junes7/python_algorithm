def solution(quiz):
    r=[]
    for q in quiz:
        e=q.split()
        if e[1]=='+' and int(e[0])+int(e[2])==int(e[-1]):
            r+=['O']
        elif e[1]=='-' and int(e[0])-int(e[2])==int(e[-1]):
            r+=['O']
        else:
            r+=['X']  
    return r