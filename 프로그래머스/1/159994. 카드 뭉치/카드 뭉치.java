class Solution {
    public String solution(String[] cards1, String[] cards2, String[] goal) {
        String rlt = "Yes";
        int idx1=0,idx2=0;
        for(String curStr:goal) {
            if(idx1<cards1.length && curStr.equals(cards1[idx1])) {
                idx1++;
            } else if(idx2<cards2.length && curStr.equals(cards2[idx2])) {
                idx2++;
            } else {
                rlt="No";
            }
        }
        return rlt;
    }
}