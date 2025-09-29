import java.util.ArrayList;
import java.util.Collections;
class Solution {
    public String[] solution(String[] strings, int n) {
        String[] rlt = new String[strings.length];
        ArrayList<String> list=new ArrayList<>();
        for(int i=0;i<strings.length;i++) {
            list.add(strings[i].charAt(n)+strings[i]);
        }
        Collections.sort(list);
        for(int i=0;i<list.size();i++) {
            rlt[i]=list.get(i).substring(1,list.get(i).length());
        }
        return rlt;
    }
}