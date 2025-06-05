import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    income=int(input())
    if income==0: break
    if income<=1000000:
        print(income*1)    
    elif 1000000<income<=5000000:
        print(int(income*0.9))
    else:
        print(int(income*0.8))