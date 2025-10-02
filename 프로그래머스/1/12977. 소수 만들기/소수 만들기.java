class Solution {
    public int solution(int[] nums) {
        int rlt = 0, sums, idx, d;
        for(int i=0;i<nums.length-2;i++) {
            for(int j=i+1;j<nums.length-1;j++) {
                for(int k=j+1;k<nums.length;k++) {
                    sums=nums[i]+nums[j]+nums[k];
                    d=2;idx=0;
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