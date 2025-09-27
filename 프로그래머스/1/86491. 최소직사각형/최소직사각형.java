class Solution {
    public int solution(int[][] sizes) {
        int rlt = 0, maxw=0, maxh=0, tmp;
        for(int i=0;i<sizes.length;i++) {
            if(sizes[i][0]<sizes[i][1]) {
                tmp=sizes[i][0];
                sizes[i][0]=sizes[i][1];
                sizes[i][1]=tmp;
            }
            if(maxw<sizes[i][0])
                maxw=sizes[i][0];
            if(maxh<sizes[i][1])
                maxh=sizes[i][1];
        }
        rlt=maxw*maxh;
        return rlt;
    }
}