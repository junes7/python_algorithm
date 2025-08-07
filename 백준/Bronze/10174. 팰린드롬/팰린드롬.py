for _ in range(int(input())):
    st=input().lower()
    print("Yes" if st==st[::-1] else "No")