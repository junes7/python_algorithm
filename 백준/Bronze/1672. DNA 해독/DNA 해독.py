import sys
input=lambda:sys.stdin.readline().rstrip()
DNA_DIC = {
    "AA": "A",
    "AG": "C",
    "AC": "A",
    "AT": "G",
    "GA": "C",
    "GG": "G",
    "GC": "T",
    "GT": "A",
    "CA": "A",
    "CG": "T",
    "CC": "C",
    "CT": "G",
    "TA": "G",
    "TG": "A",
    "TC": "G",
    "TT": "T",
}
n = int(input())
s = list(input())
for i in range(n - 2, -1, -1):
    s[i] = DNA_DIC[s[i] + s[i + 1]]
    s[i + 1] = ""
print(s[0])