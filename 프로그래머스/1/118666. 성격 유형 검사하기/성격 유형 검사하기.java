import java.util.Map;
import java.util.HashMap;
class Solution {
    public String solution(String[] survey, int[] choices) {
        String rlt = "";
        char ch;
        Map<Character, Integer> map=new HashMap<>();
        for(int i=0;i<survey.length;i++) {
            ch=survey[i].charAt(choices[i]<4?0:1);
            map.put(ch,map.getOrDefault(ch,0)+(choices[i]<4?1:-1)*(4-choices[i]));
        }
        rlt=new StringBuilder()
            .append(map.getOrDefault('R',0)>=map.getOrDefault('T',0)?'R':'T')
            .append(map.getOrDefault('C',0)>=map.getOrDefault('F',0)?'C':'F')
            .append(map.getOrDefault('J',0)>=map.getOrDefault('M',0)?'J':'M')
            .append(map.getOrDefault('A',0)>=map.getOrDefault('N',0)?'A':'N')
            .toString();
        return rlt;
    }
}