import java.lang.Math;
class Solution {
    public int solution(int n) {
        int rlt = 0,len;
        String tmp="";
        while(n>0) {
            tmp+=Integer.toString(n%3);
            n/=3;
        }
        len=tmp.length();
        for(int i=0;i<len;i++) {
            rlt+=Math.pow(3,i)*(tmp.charAt(len-1-i)-'0');
        }
        return rlt;
    }
}