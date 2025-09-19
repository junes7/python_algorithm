// 배열라이브러리, 내림차순 라이브러리 호출
import java.util.Arrays;
import java.util.Collections;
class Solution {
    public long solution(long n) {
        long rlt = 0;
        // 1. 긴 정수 문자열로 변환해 각 자릿수 나누고, 다시 문자열 배열로 변환
        String[] strArr=Long.toString(n).split("");
        // 2. 문자열 배열 내림차순으로 정렬
        Arrays.sort(strArr,Collections.reverseOrder());
        // 3. 정렬된 문자열 배열 다시 합치기
        StringBuilder sb=new StringBuilder();
        for(String s:strArr) {
            sb.append(s);
        }
        // 4. 최종 문자열 다시 Long 정수로 변환
        rlt=Long.parseLong(sb.toString());
        return rlt;
    }
}