def solution(babbling):
    for i in range(len(babbling)):
        for coo in ['aya','ye','woo','ma']:
            babbling[i]=babbling[i].replace(coo,' ')
        babbling[i]=babbling[i].replace(' ','')
    return babbling.count('')