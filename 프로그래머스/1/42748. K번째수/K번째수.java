import java.util.Arrays;
import java.util.Collections;
class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int[] rlt = new int[commands.length];
        int[] slicedArray={};
        for(int i=0;i<commands.length;i++) {
            slicedArray=Arrays.copyOfRange(array,commands[i][0]-1,commands[i][1]);
            Arrays.sort(slicedArray);
            rlt[i]=slicedArray[commands[i][2]-1];
        }
        return rlt;
    }
}