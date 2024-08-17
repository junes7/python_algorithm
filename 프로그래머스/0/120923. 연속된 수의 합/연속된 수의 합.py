def solution(num, total):
    r=[]
    # 중간값
    q=total//num
    # method1 중간값을 시작값으로 두고 순차적으로 줄이며 일치하는 합 찾기
    while True:
        r=[q+i for i in range(num)]
        if len(r)==num and sum(r)==total:
            break
        q-=1
    # method2 합의 차이로 정확한 시작 값 구하기
    # r=[q+i for i in range(num)]
    # d=(sum(r)-total)//num if sum(r)-total>0 else sum(r)-total
    # r=[(q-d)+i for i in range(num)]
    return r