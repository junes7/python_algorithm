class Solution {
    public String solution(int[] food) {
        String rlt = "";
        for(int i=1;i<food.length;i++) {
            for(int j=0;j<food[i]/2;j++) {
                rlt+=i;
            }
        }
        StringBuffer sb = new StringBuffer(rlt);
        rlt+='0'+sb.reverse().toString();
        return rlt;
    }
}