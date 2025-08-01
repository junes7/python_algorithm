import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    alpha,st=[0]*26,input()
    if st=="*": break
    for c in st:
        if c.isalpha():
            alpha[ord(c)-97]+=1
    print("N" if 0 in alpha else "Y")