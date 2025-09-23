import java.util.Arrays;

class Solution {
    public int[] solution(int[] arr, int divisor) {
        int cnt=0;
        for(int i:arr) {
            if(i%divisor==0)
                cnt++;
        }
        if(cnt==0)
            return new int[]{-1};
        else {
            int[] rlt=new int[cnt];
            cnt=0;
            for(int j:arr) {
                if(j%divisor==0) {
                    rlt[cnt++]=j;
                }
            }
            Arrays.sort(rlt);
            return rlt;
        }
    }
}