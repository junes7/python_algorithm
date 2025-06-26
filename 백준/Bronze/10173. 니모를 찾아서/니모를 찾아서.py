import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    s = input()
    if s == 'EOI':
        break       
    s = s.lower()
    print("Found" if "nemo" in s else "Missing")