import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
r=""
if n>=620:
    r="Red"
elif n>=590:
    r="Orange"
elif n>=570:
    r="Yellow"
elif n>=495:
    r="Green"
elif n>=450:
    r="Blue"
elif n>=425:
    r="Indigo"
elif n>=380:
    r="Violet"
print(r)