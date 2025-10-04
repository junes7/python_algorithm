import java.util.Arrays;
class Solution {
    public String solution(String X, String Y) {
        StringBuilder rlt = new StringBuilder();
        int x[]=new int[10], y[]=new int[10];
        Arrays.fill(x,0);
        Arrays.fill(y,0);
        for(int i=0;i<X.length();i++) {
            x[X.charAt(i)-48]+=1;
        }
        for(int i=0;i<Y.length();i++) {
            y[Y.charAt(i)-48]+=1;
        }
        for(int i=9;i>=0;i--) {
            for(int j=0;j<Math.min(x[i],y[i]);j++) {
                rlt.append(i);
            }
        }
        if(rlt.toString().equals(""))
            return "-1";
        else if(rlt.toString().charAt(0)==48)
            return "0";
        else
            return rlt.toString();
    }
}