class Solution {
    public long[] solution(int x, int n) {
        long[] rlt = new long[n];
        for(int i=0;i<n;i++)
            rlt[i]=(long)x*(i+1);
        return rlt;
    }
}