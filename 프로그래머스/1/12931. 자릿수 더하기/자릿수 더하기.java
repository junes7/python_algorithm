import java.util.*;

public class Solution {
    public int solution(int n) {
        int rlt = 0;
        char[] charArr=Integer.toString(n).toCharArray();
        for(int i=0;i<charArr.length;i++)
            rlt+=charArr[i]-48;
        return rlt;
    }
}