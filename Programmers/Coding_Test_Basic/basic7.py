'''
분수의 덧셈(addition of fractions)
첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1,
두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다.
두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을
return 하도록 solution 함수를 완성해보세요.
'''
def solution(numer1,denom1,numer2,denom2):
    numer=denom1*numer2+denom2*numer1
    denom=denom1*denom2
    gc=gcd(numer,denom)
    answer=[numer//gc,denom//gc]
    return answer

def gcd(x,y):
    if x%y==0:
        return y
    return gcd(y,x%y)

if __name__ == "__main__":
    num1,denom1,num2,denom2=map(int,input().split())
    print(solution(num1,denom1,num2,denom2))