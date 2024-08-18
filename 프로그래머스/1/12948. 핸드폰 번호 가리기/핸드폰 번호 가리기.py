def solution(phone_number):
    r=phone_number.replace(phone_number[:-4],'*'*len(phone_number[:-4]))
    return r