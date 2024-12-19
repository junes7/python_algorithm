def solution(people, limit):
    people.sort()
    r,left,right=0,0,len(people)-1
    while left<right+1:
        if people[left]+people[right]<=limit:
            left+=1
        right-=1
        r+=1
    return r