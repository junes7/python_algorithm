import java.util.Map;
class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        Map<Integer,Integer> rank=Map.of(6,1,5,2,4,3,3,4,2,5);
        int len=lottos.length, zeros=0, matches=0, rlt[] = new int[2];
        for(int i=0;i<len;i++) {
            if(lottos[i]==0)
                zeros++;
            for(int j=0;j<win_nums.length;j++) {
                if(lottos[i]==win_nums[j]) {
                    matches++;
                    break;
                }
            }
        }
        System.out.println(zeros);
        System.out.println(matches);
        rlt[0]=Optional.ofNullable(rank).rank(Integer::trim).orElse(0);
        rlt[1]=rank.get(matches);
        return rlt;
    }
}