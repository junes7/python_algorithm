import sys
input=lambda:sys.stdin.readline().rstrip()
i=1
while True:
    a,b=input(),input()
    if a=="END" and b=="END": break
    alst,blst=sorted([*a]),sorted([*b])
    print(f"Case {i}: {'same' if alst==blst else 'different'}")
    i+=1