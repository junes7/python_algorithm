class Solution {
    public String solution(String s, int n) {
        String rlt = "";
        for(char ch:s.toCharArray()) {
            if(ch==' ') {
                rlt+=' ';
            } else {
                rlt+=(char)(Character.isUpperCase(ch)?(ch-65+n)%26+65:(ch-97+n)%26+97);
            }
        }
        return rlt;
    }
}