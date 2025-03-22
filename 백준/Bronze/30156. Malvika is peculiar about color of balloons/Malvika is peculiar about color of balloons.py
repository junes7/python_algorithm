import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    s=input()
    cnta,cntb=0,0
    for c in s:
        if c=='a':
            cnta+=1
        else:
            cntb+=1
    print(cnta if cnta<cntb else cntb)