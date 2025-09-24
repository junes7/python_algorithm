class Solution {
    public long solution(int price, int money, int count) {
        long rlt = 0;
        for(int i=1;i<count+1;i++) {
            rlt+=price*i;
        }
        rlt=money-rlt<0?rlt-money:0;
        return rlt;
    }
}