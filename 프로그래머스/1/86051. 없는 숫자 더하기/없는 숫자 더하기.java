class Solution {
    public int solution(int[] numbers) {
        int rlt = 0;
        boolean flag;
        for(int i=0;i<10;i++) {
            flag=false;
            for(int j=0;j<numbers.length;j++) {
                if(i==numbers[j]) {
                    flag=true;
                    break;
                }
            }
            if(!flag) rlt+=i;           
        }
        return rlt;
    }
}