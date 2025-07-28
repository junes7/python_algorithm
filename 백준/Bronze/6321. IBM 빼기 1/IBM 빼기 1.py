import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    st=[*input()]
    for j in range(len(st)):
        st[j]=chr((ord(st[j])-64)%26+65)
    print("String #%d\n%s\n" % (i+1,''.join(st)))