class Solution {
    public int solution(int[] absolutes, boolean[] signs) {
        int rlt = 0;
        for(int i=0;i<signs.length;i++) {
            rlt+=signs[i]?absolutes[i]:-1*absolutes[i];
        }
        return rlt;
    }
}