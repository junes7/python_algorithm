def solution(my_string):
    r=0
    # method1
    # for c in my_string:
    #     if 48<=ord(c) and ord(c)<=57:
    #         r+=ord(c)%48
    # method2
    for c in my_string:
        if c.isnumeric():
            r+=int(c)
    return r