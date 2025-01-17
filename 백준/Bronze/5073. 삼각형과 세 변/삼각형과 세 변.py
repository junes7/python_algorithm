import sys
while 1:
    num=list(map(int,sys.stdin.readline().split()))
    num.sort()
    if sum(num)==0:
        break;
    else:
        if num[-1]>=num[0]+num[1]:
            print("Invalid")
        else:
            print("Equilateral" if num[0]==num[2] else "Isosceles" if num[0]==num[1] or num[1]==num[2] else "Scalene")