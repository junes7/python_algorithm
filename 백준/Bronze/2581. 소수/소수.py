n=int(input())
end=int(input())
primeNum=[]
if n==1: n+=1
while n<=end:
    flag=True
    for i in range(2,int(n**(1/2))+1):
        if n%i ==0:
            flag=False;
            break;
    if flag:
        primeNum+=[n]
    n+=1
if len(primeNum)==0:
    print(-1)
else:
    print(sum(primeNum),primeNum[0],sep="\n")