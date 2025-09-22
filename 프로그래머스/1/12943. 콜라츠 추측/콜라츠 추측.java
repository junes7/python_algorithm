class Solution {
    public int solution(long num) {
        int rlt = 0;
        for(int i=0;i<500;i++) {
            if(num==1) {
                break;
            } else {
                num=num%2==0?num/2:(num*3+1);
                rlt+=1;
            }
        }
        if(rlt>=500)
            rlt=-1;
        return rlt;
    }
}