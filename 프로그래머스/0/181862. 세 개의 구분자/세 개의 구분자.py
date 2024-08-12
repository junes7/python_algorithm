def solution(myStr):
    m=myStr.replace('a',' ').replace('b',' ').replace('c',' ').split()
    return ['EMPTY'] if not len(m) else m