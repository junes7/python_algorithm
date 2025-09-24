import java.util.Arrays;
class Solution {
    public int[] solution(int[] arr) {
        int idx=0, len=arr.length, rlt[] = new int[len-1];
        if(rlt.length<1)
            return new int[]{-1};
        int min=Arrays.stream(arr).min().getAsInt();
        for(int i=0;i<len;i++) {
            if(arr[i]!=min) {
                rlt[idx++]=arr[i];
            }
        }    
        return rlt;
    }
}