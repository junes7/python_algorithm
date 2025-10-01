import java.util.Collections;
import java.util.List;
import java.util.ArrayList;
class Solution {
    public int[] solution(int k, int[] score) {
        int[] rlt = new int[score.length];
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<score.length;i++) {
            if(i<k) {
                list.add(score[i]);
            } else {
                for(int j=0;j<list.size();j++) {
                    if(list.get(j)<score[i]) {
                        list.set(j,score[i]);
                        break;
                    }
                }
            }
            Collections.sort(list);
            rlt[i]=list.get(0);
        }
        return rlt;
    }
}