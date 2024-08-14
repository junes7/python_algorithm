def solution(my_string):
    i,s,n=0,0,''
    while i < len(my_string):
        if my_string[i].isnumeric():
            n+=my_string[i]
            if i==len(my_string)-1:
                s+=int(n)
                n=''   
        else:     
            if n!='':
                s+=int(n)
            n=''
        i+=1
        
    return s