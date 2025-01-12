re=[]
for i in range(10):
    n=int(input())%42
    if n not in re:
        re+=[n]
print(len(re))