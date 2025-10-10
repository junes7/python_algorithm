class Solution {
    public int[] solution(String s) {
        int cnt=0, rlt[] = new int[2];
        while(s.length()>1) {
            cnt=0;
            for(int i=0;i<s.length();i++) {
                if(s.charAt(i)=='0') rlt[1]++;
                else cnt++;
            }
            s=Integer.toBinaryString(cnt);
            rlt[0]++;
        }
        return rlt;
    }
}