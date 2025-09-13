import sys
input=lambda:sys.stdin.readlines()
for line in input():
    line = line.rstrip()
    while 'BUG' in line:
        line = line.replace('BUG', '')
    print(line)