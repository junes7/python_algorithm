class Solution {
    public long solution(long n) {
        double d1=Math.pow(n,0.5);
        long rlt = d1==(long)d1?(long)Math.pow(d1+1,2):-1;
        return rlt;
    }
}