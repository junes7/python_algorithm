class Solution {
    public String solution(int n) {
        String rlt = "";
        for(int i=0;i<n;i++)
            rlt+=i%2==0?'수':'박';
        return rlt;
    }
}