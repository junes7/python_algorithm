class Solution {
    public String solution(String s, String skip, int index) {
        String rlt = "";
        StringBuilder sb = new StringBuilder();
        for(char ch:s.toCharArray()) {
            for(int i=0;i<index;i++) {
                ch=(char)((ch-97+1)%26+97);
                while(skip.contains(String.valueOf(ch))) {
                    ch=(char)((ch-97+1)%26+97);
                }
            }
            sb.append(ch);           
        }
        rlt=sb.toString();
        return rlt;
    }
}