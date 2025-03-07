import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
club={"M":"MatKor","W":"WiCys","C":"CyKor","A":"AlKor","$":"$clear"}
print(club[st])