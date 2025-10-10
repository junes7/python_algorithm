class Solution {
    public int solution(int n) {
        int tmp=0,a=1,b=1;
        for(int i=3;i<n+1;i++) {
            tmp=a;
            a=b;
            b=(tmp+b)%1234567;
        }
        return b;
    }
}