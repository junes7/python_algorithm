class Solution {
    public int solution(String t, String p) {
        int rlt = 0;
        long pnum=Long.parseLong(p);
        System.out.println(pnum);
        for(int i=0;i<t.length()-p.length()+1;i++) {
            String tmp=t.substring(i,i+p.length());
            if(Long.parseLong(tmp)<=pnum)
                rlt+=1;
        }
        return rlt;
    }
}