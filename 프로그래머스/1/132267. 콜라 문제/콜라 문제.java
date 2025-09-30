class Solution {
    public int solution(int a, int b, int n) {
        int rlt = 0;
        while(n/a>0) {
            rlt+=n/a*b;
            n=n/a*b+n%a;
        }
        return rlt;
    }
}