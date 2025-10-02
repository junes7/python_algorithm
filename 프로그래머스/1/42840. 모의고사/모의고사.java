import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;
class Solution {
    public int[] solution(int[] answers) {
        int rlt[] = {}, cnt[]=new int[3], p1[] = {1,2,3,4,5};
        int p2[] = {2,1,2,3,2,4,2,5}, p3[] = {3,3,1,1,2,2,4,4,5,5};
        List<Integer> list=new ArrayList<>();
        for(int i=0;i<answers.length;i++) {
            if(answers[i]==p1[i%p1.length]) {
                cnt[0]++;
            }
            if(answers[i]==p2[i%p2.length]) {
                cnt[1]++;
            }
            if(answers[i]==p3[i%p3.length]) {
                cnt[2]++;
            }
        }
        int maxn=Arrays.stream(cnt).max().getAsInt();
        System.out.println(maxn);
        for(int i=0;i<cnt.length;i++) {
            if(maxn==cnt[i]) {
                list.add(i+1);
            }
        }
        rlt=list.stream().mapToInt(Integer::intValue).toArray();
        return rlt;
    }
}