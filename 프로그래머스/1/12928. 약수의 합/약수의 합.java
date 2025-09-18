class Solution {
    public int solution(int n) {
        int rlt = 0;
        for(int i=1;i<n+1;i++)
            if(n%i==0)
                rlt+=i;
        return rlt;
    }
}