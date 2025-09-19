class Solution {
    public int[] solution(long n) {
        char[] charArr=Long.toString(n).toCharArray();
        int len=charArr.length;
        int[] rlt = new int[len];
        for(int i=0;i<len;i++)
            rlt[i]=charArr[len-1-i]-48;
        return rlt;
    }
}