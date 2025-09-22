class Solution {
    public boolean solution(int x) {
        boolean rlt = true;
        char[] charArr=Integer.toString(x).toCharArray();
        int s=0;
        for(int i=0;i<charArr.length;i++)
            s+=charArr[i]-48;
        rlt=x%s==0?true:false;
        return rlt;
    }
}