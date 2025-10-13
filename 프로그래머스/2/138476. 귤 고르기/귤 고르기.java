import java.util.*;
class Solution {
    public int solution(int k, int[] tangerine) {
        int rlt = 0;
        Map<Integer,Integer> map=new HashMap<>();
        for(int n:tangerine) {
            map.put(n,map.getOrDefault(n,0)+1);
        }
        List<Integer> keys = new ArrayList<>(map.keySet());
        keys.sort((o1,o2) -> map.get(o2)-map.get(o1));
        for(int v:keys) {
            k-=map.get(v);
            rlt++;
            if(k<=0) break;
        }
        return rlt;
    }
}