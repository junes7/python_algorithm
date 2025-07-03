import sys
input=lambda:sys.stdin.readline().rstrip()
vowels,conti=['a','e','i','o','u'],['e','o']
while 1:
    st=input()
    if st=="end": break
    cnt,l=0,len(st)
    for c in vowels:
        if c in st:
            cnt+=1
    if cnt<1:
        print(f"<{st}> is not acceptable.")
        continue
    flag=True
    for i in range(l-2):
        if st[i] in vowels and st[i+1] in vowels and st[i+2] in vowels:
            flag=False
            break
        elif not(st[i] in vowels or st[i+1] in vowels or st[i+2] in vowels):
            flag=False
            break
    if not flag:
        print(f"<{st}> is not acceptable.")
        continue
    flag=True
    for i in range(l-1):
        if st[i]==st[i+1]:
            if st[i] not in conti:
                flag=False
                break
    if not flag:
        print(f"<{st}> is not acceptable.")
        continue
    print(f"<{st}> is acceptable.")