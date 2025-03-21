import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
lack=""
for a in "UAPC":
    if a not in st:
        lack+=a
print(lack)