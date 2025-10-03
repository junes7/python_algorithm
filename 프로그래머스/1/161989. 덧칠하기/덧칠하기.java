class Solution {
    public int solution(int n, int m, int[] section) {
        int rlt = 1, st=section[0];
        for(int i=0;i<section.length;i++) {
            if(st+m-1<section[i]) {
                st=section[i];
                rlt+=1;
            }
        }
        return rlt;
    }
}