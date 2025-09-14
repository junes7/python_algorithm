from string import ascii_lowercase
alphabets = list(ascii_lowercase)
s = input()
dictionary = []
for i in range(int(input())):
    dictionary.append(input())
printed = False
for i in dictionary:
    if i in s:
        print(s)
        printed = True
        break
if not printed:
    for i in range(1, 26):
        alpha = {}
        for j in range(26):
            a = j+i
            if a > 25:
                a -= 26
            alpha[alphabets[j]] = alphabets[a]
        decode = ""
        for j in s:
            decode += alpha[j]
        for j in dictionary:
            if j in decode:
                print(decode)
                break