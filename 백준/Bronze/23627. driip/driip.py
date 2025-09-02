import sys
input=lambda:sys.stdin.readline().rstrip()
sentence = input()
if len(sentence) >= 5 and sentence[-5:] == "driip":
    print("cute")
else:
    print("not cute")