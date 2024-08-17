def solution(quiz):
    r=[]
    for q in quiz:
        e=q.split()
        # method1 인덱스 사용
        # if e[1]=='+' and int(e[0])+int(e[2])==int(e[-1]):
        #     r+=['O']
        # elif e[1]=='-' and int(e[0])-int(e[2])==int(e[-1]):
        #     r+=['O']
        # else:
        #     r+=['X']
        # method2 eval 함수 사용
        r+=['O' if eval(e[1].join([e[0],e[2]]))==int(e[-1]) else 'X']
    return r