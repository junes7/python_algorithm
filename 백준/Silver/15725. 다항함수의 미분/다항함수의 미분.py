array = list(input())
if 'x' in array:
    if array[0] == 'x':
        print(1)
    elif array[0] == '-' and array[1] == 'x':
        print(-1)
    else:
        number = ' ' 
        if array[0] != '-':
            coef = array[:array.index('x')]
            for val in coef:
                number += val
            print(int(number))
        else:
            coef = array[1:array.index('x')]
            for val in coef:
                number += val
            print(-int(number))
else:
    print(0)