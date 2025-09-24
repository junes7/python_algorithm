import java.util.Arrays;
import java.util.Collections;
class Solution {
    public String solution(String s) {
        String rlt = "",tmp[] = s.split("");
        Arrays.sort(tmp,Collections.reverseOrder());
        rlt=String.join("",tmp);
        return rlt;
    }
}