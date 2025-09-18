class Solution {
    public int solution(int angle) {
        int rlt = angle/90*2+(angle%90==0?0:1);
        return rlt;
    }
}