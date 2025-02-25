n = int(input())
bag_count = 0
while n >= 0:
    if n%5==0: 
        bag_count+=n//5
        print(bag_count)
        break
    bag_count += 1
    n=n-3
else:
    print(-1)