def solution(num_list):
    odd,even='',''
    r=0
    for n in num_list:
        if n%2!=0:
            odd+=str(n)
        else:
            even+=str(n)
    r=int(odd)+int(even)
    return r