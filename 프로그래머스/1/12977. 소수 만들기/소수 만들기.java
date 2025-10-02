class Solution {
    public int solution(int[] nums) {
        int len = nums.length, d, idx, sums, rlt = 0;
        for(int i=0;i<len-2;i++) {
            for(int j=i+1;j<len-1;j++) {
                for(int k=j+1;k<len;k++) {
                    d=2; idx=0;
                    sums=nums[i]+nums[j]+nums[k];
                    while(sums>1) {
                        if(sums%d==0) {
                            idx++;
                            sums/=d;
                        } else {
                            d++;
                        }
                        
                    }
                    rlt+=idx==1?1:0;
                }
            }
        }
        return rlt;
    }
}