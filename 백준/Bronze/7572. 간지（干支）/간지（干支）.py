import sys
input=lambda:sys.stdin.readline().rstrip()
idx=int(input())-2013
twelve='ABCDEFGHIJKL'
ten='0123456789'
print(twelve[(idx+5)%12]+ten[(idx-1)%10])