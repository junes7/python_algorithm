class Solution {
    public String solution(String phone_number) {
        String rlt = "";
        char[] charArr=phone_number.toCharArray();
        int len=charArr.length;
        for(int i=0;i<len;i++)
            rlt+=i<len-4?'*':charArr[i];
        return rlt;
    }
}