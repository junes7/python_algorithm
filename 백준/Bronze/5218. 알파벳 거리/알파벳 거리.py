import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    w1,w2=input().split()
    arr=[]
    for i in range(len(w1)):
        x,y=ord(w1[i])-65,ord(w2[i])-65
        if x<=y:
            arr+=[y-x]
        else:
            arr+=[(y+26)-x]
    print("Distances:",*arr)