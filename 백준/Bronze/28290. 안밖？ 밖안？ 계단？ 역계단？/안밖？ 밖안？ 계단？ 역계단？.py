import sys
input=lambda:sys.stdin.readline().rstrip()
st = input()
if st == "fdsajkl;" or st == "jkl;fdsa":
    print("in-out")
elif st == "asdf;lkj" or st == ";lkjasdf":
    print("out-in")
elif st == "asdfjkl;":
    print("stairs")
elif st == ";lkjfdsa":
    print("reverse")
else:
    print("molu")