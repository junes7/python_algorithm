while 1:
    a=int(input())
    if a==-1:
        break
    else:
        d,num=1,[]
        while d<a:
            if a%d==0:
                num+=[d]
            d+=1
    if sum(num)==a:
        print(a,"= ",end='')
        for i in range(len(num)):
            if(i==len(num)-1):
                print(num[i])
            else:
                print(num[i],"+ ",end='')
    else:
        print(a,"is NOT perfect.")