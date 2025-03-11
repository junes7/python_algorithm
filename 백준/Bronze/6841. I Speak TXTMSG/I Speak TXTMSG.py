import sys
input=lambda:sys.stdin.readline().rstrip()
abbrev={"CU":"see you",":-)":"I’m happy",":-(":"I’m unhappy",";-)":"wink",":-P":"stick out my tongue",
        "(~.~)":"sleepy","TA":"totally awesome","CCC":"Canadian Computing Competition","CUZ":"because",
        "TY":"thank-you","YW":"you're welcome","TTYL":"talk to you later"}
while True:
    st=input()
    print(abbrev[st] if st in abbrev.keys() else st)
    if st=="TTYL": break