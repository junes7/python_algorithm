def solution(numbers):
    r=numbers
    # method1 replace function
    # r=r.replace('zero','0').replace('one','1').replace('two','2').replace('three','3').replace('four','4').replace('five','5').replace('six','6').replace('seven','7').replace('eight','8').replace('nine','9')
    # method2 for statement with replace function
    num=["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    for idx,eng in enumerate(num):
        r=r.replace(eng,str(idx))
    return int(r)