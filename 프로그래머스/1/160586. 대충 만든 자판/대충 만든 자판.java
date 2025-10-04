import java.util.Map;
import java.util.HashMap;
class Solution {
    public int[] solution(String[] keymap, String[] targets) {
        int value, rlt[] = new int[targets.length];
        char key;
        Map<Character, Integer> map=new HashMap<>();
        for(String s:keymap) {
            for(int i=0;i<s.length();i++) {
                key=s.charAt(i);
                value=map.getOrDefault(key,i+1);
                map.put(key,Math.min(value,i+1));
            }
        }
        for(int i=0;i<targets.length;i++) {
            for(int j=0;j<targets[i].length();j++) {
                key=targets[i].charAt(j);
                if(map.containsKey(key)) {
                    rlt[i]+=map.get(key);
                } else {
                    rlt[i]=-1;
                    break;
                }
            }
        }
        return rlt;
    }
}