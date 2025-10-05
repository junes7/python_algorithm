class Solution {
    public int solution(int[] ingredient) {
        int rlt = 0, len;
        StringBuilder sb = new StringBuilder();
        for(int n:ingredient) {
            sb.append(n);
            len=sb.length();
            if(len>3 && sb.substring(len-4,len).equals("1231")) {
                rlt++;
                sb.delete(len-4,len);
            }
        }      
        return rlt;
    }
}