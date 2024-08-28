def solution(arr):
    '''
    A,B,C의 최소공배수
    ① A와 B의 최소공배수를 구한다.
    ② ①과 C의 최소공배수를 구하면!
    그게 바로 A,B,C의 최소공배수
    '''
    # 작은 수부터 차례대로 구하게 하기 위해 오름차순 정렬해줍니다.
    arr.sort()
    # 배열 처음 값을 초기 값으로 설정한 최소공배수 변수와 배열 길이 변수 선언
    r,l=arr[0],len(arr)
    # 배열 길이-1만큼 돌면서(한번에 2개씩 처리하기에 한번 덜 반복하게 됩니다.)
    for i in range(l-1):
        # A와 B의 최대공약수 구한다.
        gc=gcd(r,arr[i+1])
        # A와 B에 각각 최대공약수 나눠준 후 최대공약수 곱해서 최소공배수 구해준다.
        lcm=r//gc*arr[i+1]//gc*gc
        # 다음 값의 최소공배수 비교 대상으로 사용하기 위해 r에 구한 최소공배수 값 넣어준다.
        r=lcm
    return r
# 최대 공약수(Greatest Common Divisor|GCD) 함수
def gcd(x,y):
    if x%y==0:
        return y
    else:
        return gcd(y,x%y)
