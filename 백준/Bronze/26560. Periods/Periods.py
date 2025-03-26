import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st=input()
    if st[-1]!=".":
        st+="."
    print(st)