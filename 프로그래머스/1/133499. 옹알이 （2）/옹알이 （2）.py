def solution(babbling):
    for i in range(len(babbling)):
        for cont in ['ayaaya','yeye','woowoo','mama']:
            if cont in babbling[i]:
                babbling[i]='x'
        for coo in ['aya','ye','woo','ma']:
            babbling[i]=babbling[i].replace(coo,' ')    
        babbling[i]=babbling[i].replace(' ','')
    return babbling.count('')