import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
print(len(st)-len(''.join(dict.fromkeys(st))))