import sys
input=lambda:sys.stdin.readline().rstrip()
st,vowel=input(),['a','e','i','o','u']
i,rlt=0,""
while i<len(st):
    if st[i] in vowel:
        i+=2
    rlt+=st[i]
    i+=1
print(rlt)