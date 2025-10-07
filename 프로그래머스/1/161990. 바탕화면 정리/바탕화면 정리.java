import java.lang.Math;
class Solution {
    public int[] solution(String[] wallpaper) {
        int rlt[] = {51,51,0,0};
        for(int i=0;i<wallpaper.length;i++) {
            for(int j=0;j<wallpaper[i].length();j++) {
                if(wallpaper[i].charAt(j)=='#'){
                    rlt[0]=Math.min(i,rlt[0]);
                    rlt[1]=Math.min(j,rlt[1]);
                    rlt[2]=Math.max(i+1,rlt[2]);
                    rlt[3]=Math.max(j+1,rlt[3]);
                }
            }
        }
        return rlt;
    }
}