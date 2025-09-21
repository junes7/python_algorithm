lst = [(i*(i+1))//2 for i in range(45)]
check = [0]*1001

for i in range(1, 45):
    for j in range(i, 45):
        for k in range(j, 45):
            a = lst[i] + lst[j] + lst[k]
            if a <= 1000:
                check[a] = 1
t = int(input())
for _ in range(t):
    n = int(input())
    print(check[n])