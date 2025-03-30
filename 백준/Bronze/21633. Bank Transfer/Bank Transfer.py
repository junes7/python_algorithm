import sys
input=lambda:sys.stdin.readline().rstrip()
k=25+int(input())*0.01
print(f"{2000 if k>2000 else 100 if k<100 else k:.2f}")