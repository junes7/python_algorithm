import java.util.Arrays;
class Solution {
    public int solution(int k, int m, int[] score) {
        int rlt = 0,nmin=9;
        Arrays.sort(score);
        for(int i=score.length;i>=m;i-=m) {
            rlt+=score[i-m]*m;
        }
        return rlt;
    }
}