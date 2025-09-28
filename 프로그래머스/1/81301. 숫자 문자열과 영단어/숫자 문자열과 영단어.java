import java.util.Map;
class Solution {
    public int solution(String s) {
        int rlt = 0;
        String tmp=new String(s);
        Map<String,String> num=Map.of("one","1","two","2","three","3","four","4","five","5","six","6","seven","7","eight","8","nine","9","zero","0");
        for(Map.Entry<String,String> elem:num.entrySet()) {
            tmp=tmp.replace(elem.getKey(),elem.getValue());
        }
        rlt=Integer.parseInt(tmp);
        return rlt;
    }
}