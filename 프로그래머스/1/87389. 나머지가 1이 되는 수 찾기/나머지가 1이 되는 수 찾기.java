class Solution {
    public int solution(int n) {
        int rlt = 0;
        for(int i=1;i<n+1;i++)
            if(n%i==1) {
                rlt=i;
                break;
            }
        return rlt;
    }
}