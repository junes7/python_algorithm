class Solution {
    public int solution(int n) {
        int rlt = 0;
        for(int i=2;i<n+1;i=i+2)
            rlt+=i;
        return rlt;
    }
}