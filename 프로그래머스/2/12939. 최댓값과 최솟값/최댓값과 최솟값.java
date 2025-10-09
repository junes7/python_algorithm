import java.util.Arrays;
class Solution {
    public String solution(String s) {
        String rlt = "";
        int tmp[] =Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        rlt+=Arrays.stream(tmp).min().getAsInt();
        rlt+=" ";
        rlt+=Arrays.stream(tmp).max().getAsInt();
        return rlt;
    }
}