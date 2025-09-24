class Solution {
    public boolean solution(String s) {
        boolean rlt = true;
        char[] charArr=s.toCharArray();
        int len=charArr.length;
        if(len==4 || len==6) {
            for(char c:charArr) {
                if(Character.isAlphabetic(c)) {
                    rlt=false;
                    break;
                }
            }
        } else {
            rlt=false;   
        }
        return rlt;
    }
}