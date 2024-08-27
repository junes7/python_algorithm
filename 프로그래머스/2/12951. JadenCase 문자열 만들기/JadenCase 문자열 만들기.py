def solution(s):
    t=s.split(' ')
    for i, word in enumerate(t):
        if word and not word.isdigit():
            t[i]=word[0].upper()+word[1:].lower()
    r=' '.join(t)
    return r