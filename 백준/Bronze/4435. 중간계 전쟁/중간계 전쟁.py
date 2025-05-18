import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(1,int(input())+1):
    arr1=[*map(int,input().split())]
    scr1=[1,2,3,3,4,10]
    arr2=[*map(int,input().split())]
    scr2=[1,2,2,2,3,5,10]
    wizard=[arr1[i]*scr1[i] for i in range(6)]
    oak=[arr2[i]*scr2[i] for i in range(7)]
    wizardt,oakt=sum(wizard),sum(oak)
    print("Battle %d: %s" % (i,"No victor on this battle field" if wizardt==oakt else "Evil eradicates all trace of Good" if wizardt<oakt else "Good triumphs over Evil"))