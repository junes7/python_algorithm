class Solution {
    public double solution(int[] arr) {
        double rlt = 0;
        int len = arr.length,s=0;
        for(int i=0;i<len;i++)
            s+=arr[i];
        rlt=(double)s/len;
        return rlt;
    }
}