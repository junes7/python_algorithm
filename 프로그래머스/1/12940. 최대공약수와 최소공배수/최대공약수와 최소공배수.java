class Solution {
    public int gcd(int x,int y) {
        return x%y==0?y:gcd(y,x%y);
    }
    public int[] solution(int n, int m) {
        int gcdn=gcd(n,m), rlt[]={gcdn,n*m/gcdn};
        return rlt;
    }
}