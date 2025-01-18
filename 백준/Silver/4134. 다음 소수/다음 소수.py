import sys,math
n=int(sys.stdin.readline())
for i in range(n):
    flag=False
    num=int(sys.stdin.readline())
    if num<2:
        print(2)
    else:
        while 1:
            if flag:
                print(num)
                break
            flag=True
            for j in range(2,int(math.sqrt(num))+1):
                if num%j==0:
                    flag=False
                    num+=1
                    break