using namespace std;

long long solution(int price, int money, int count)
{
    long long r=0;
    for(int i=1;i<count+1;i++) {
        r+=price*i;
    }
    r=(money-r<0)?r-money:0;
    return r;
}