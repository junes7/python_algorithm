class Solution {
    public int solution(int[] a, int[] b) {
        int rlt = 0;
        for(int i=0;i<a.length;i++)
            rlt+=a[i]*b[i];
        return rlt;
    }
}