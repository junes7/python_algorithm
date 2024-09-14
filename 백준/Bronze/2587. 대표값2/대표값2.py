t=[]
for i in range(5):
    t+=[int(input())]
t.sort()
print(sum(t)//5,t[5//2],sep='\n')