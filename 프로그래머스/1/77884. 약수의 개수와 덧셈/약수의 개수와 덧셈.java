class Solution {
    public int solution(int left, int right) {
        int rlt = 0, cnt = 0;
        for(int i=left;i<right+1;i++) {
            cnt = 0;
            for(int j=1;j<i+1;j++) {
                if(i%j==0)
                    cnt+=1;
            }
            rlt+=cnt%2==0?i:-i;
        }
        return rlt;
    }
}