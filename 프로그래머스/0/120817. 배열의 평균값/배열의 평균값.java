class Solution {
    public double solution(int[] numbers) {
        double rlt = 0;
        int len=numbers.length,s=0;
        for(int i=0;i<len;i++)
            s+=numbers[i];
        rlt=(double)s/len;
        return rlt;
    }
}