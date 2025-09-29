import java.util.Map;
import java.util.HashMap;
class Solution {
    public int[] solution(String s) {
        char[] tmp=s.toCharArray();
        int[] rlt = new int[tmp.length];
        Map<Character,Integer> charIdx=new HashMap<>();
        for(int i=0;i<tmp.length;i++) {
            rlt[i]=charIdx.get(tmp[i])==null?-1:(i+1-charIdx.get(tmp[i]));
            charIdx.put(tmp[i],i+1);
        }
        return rlt;
    }
}