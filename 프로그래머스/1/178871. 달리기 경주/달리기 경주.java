import java.util.Map;
import java.util.HashMap;
import java.util.stream.IntStream;
import java.util.stream.Collectors;
class Solution {
    public String[] solution(String[] players, String[] callings) {
        String tmp, rlt[] = players;
        int rank;
        Map<String,Integer> map=IntStream.range(0,players.length)
            .boxed() // IntStream을 Stream<Integer>로 박싱
            .collect(Collectors.toMap(
                idx -> players[idx],
                idx -> idx
            ));
        for(String st:callings) {
            rank=map.get(st);
            // 선수 위치 swap
            tmp = rlt[rank-1];
            rlt[rank-1]=rlt[rank];
            rlt[rank]=tmp;
            map.put(rlt[rank-1],rank-1);
            map.put(rlt[rank],rank);
        }
        return rlt;
    }
}