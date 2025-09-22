class Solution {
    public long solution(int a, int b) {
        long rlt = 0;
        int tmp;
        if(a>b) {
            tmp=a;
            a=b;
            b=tmp;
        }
        
        for(int i=a;i<b+1;i++)
            rlt+=i;
        return rlt;
    }
}