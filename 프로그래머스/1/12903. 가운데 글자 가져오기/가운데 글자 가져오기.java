class Solution {
    public String solution(String s) {
        String rlt = "";
        char[] charArr=s.toCharArray();
        int mid=s.length()/2;
        if(s.length()%2==0)
            rlt+=charArr[mid-1];
        rlt+=charArr[mid];
        return rlt;
    }
}