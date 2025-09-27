class Solution {
    public String solution(String s) {
        String rlt = "",tmp[]=s.split("");
        int cnt = 0;
        for(String st:tmp) {
            cnt=st.contains(" ")?0:cnt+1;
            rlt+=cnt%2==0?st.toLowerCase():st.toUpperCase();
        }
        return rlt;
    }
}