def solution(strArr):
    # method1
    r=[]
    for i in range(len(strArr)):
        r.append(strArr[i].lower() if i%2==0 else strArr[i].upper())
    # method2
    # answer=[strArr[i].lower() if i%2==0 else strArr[i].upper() for i in range(len(strArr))]
    return r