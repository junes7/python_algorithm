import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st=input()
    print("skipped" if '=' in st else eval(st))