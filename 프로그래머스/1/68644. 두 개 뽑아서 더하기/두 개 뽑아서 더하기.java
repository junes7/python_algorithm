import java.util.*;
class Solution {
    public int[] solution(int[] numbers) {
        int tmp, rlt[] = {};
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<numbers.length-1;i++) {
            for(int j=i+1;j<numbers.length;j++) {
                tmp=numbers[i]+numbers[j];
                if(!list.contains(tmp)) {
                    list.add(tmp);
                }
            }
        }
        Collections.sort(list);
        rlt=list.stream().mapToInt(i->i).toArray();
        return rlt;
    }
}