import java.util.Arrays;
import java.util.stream.IntStream;
class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int zeros=0, matches=0, rlt[] = new int[2];
        for(int item:lottos) {
            if(item==0) zeros++;
            else if(IntStream.of(win_nums).anyMatch(elem -> elem==item))matches++;
        }
        rlt[1]=7-matches>=6?6:7-matches;
        rlt[0]=rlt[1]-zeros<1?1:rlt[1]-zeros;
        return rlt;
    }
}