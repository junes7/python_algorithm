class Solution {
    public String solution(String s) {
        String rlt = "", tmp[] = s.split(" ");
        char[] elem;
        for(int i=0;i<tmp.length;i++) {
            if(tmp[i].length()>0) {
                elem=tmp[i].toCharArray();
                if(Character.isLowerCase(elem[0])) {
                    elem[0]-=32;
                }
                for(int j=1;j<elem.length;j++) {
                    if(Character.isUpperCase(elem[j])) {
                        elem[j]+=32;
                    }
                }         
                tmp[i]=new String(elem);
            }
        }
        rlt = String.join(" ",tmp);
        if(s.charAt(s.length()-1)==' ')
            rlt += " ";
        return rlt;
    }
}