S = input()
korea = ["K", "O", "R", "E", "A"]
length = 0
for i in range(len(S)):
    if S[i] == korea[length % 5]:
        length += 1
print(length)