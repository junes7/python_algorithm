import java.util.*;
class Solution {
    public int[] solution(String today, String[] terms, String[] privacies) {
        int cur[], tar[];
        String[] tmp;
        List<Integer> list = new ArrayList<>();
        Map<String,Integer> map = new HashMap<>();
        for(int i=0;i<terms.length;i++) {
            tmp=terms[i].split(" ");
            map.put(tmp[0],Integer.valueOf(tmp[1])*28);
        }      
        cur=date(today);
        for(int i=0;i<privacies.length;i++) {
            tmp=privacies[i].split(" ");
            tar=date(tmp[0]);
            if((cur[0]-tar[0])*28*12+(cur[1]-tar[1])*28+(cur[2]-tar[2])>=map.get(tmp[1])) {
                list.add(i+1);
            }
        }
        return list.stream().mapToInt(Integer::intValue).toArray();
    }
    public int[] date(String d) {
        return Arrays.stream(d.split("\\.")).mapToInt(Integer::parseInt).toArray();
    }
}