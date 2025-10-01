import java.time.*;
class Solution {
    public String solution(int a, int b) {
        String rlt = LocalDate.of(2016,a,b).getDayOfWeek().toString().substring(0,3);
        return rlt;
    }
}