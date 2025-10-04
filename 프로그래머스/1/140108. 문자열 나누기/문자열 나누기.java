class Solution {
    public int solution(String s) {
        int rlt = 1, cnt = 1;
        char ch=s.charAt(0);
        for(int i=1;i<s.length();i++) {
            if(cnt==0) {
                rlt+=1;
                ch=s.charAt(i);
            }
            if(ch==s.charAt(i)) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return rlt;
    }
}