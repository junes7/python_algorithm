class Solution {
    public int[] solution(int brown, int yellow) {
        int total=brown+yellow, row=0, rlt[] = new int[2];
        for(int col=3;col<total+1;col++) {
            row=total/col;
            if((row-2)*(col-2)==yellow)
                break;
        }
        rlt[0]=row;
        rlt[1]=total/row;
        return rlt;
    }
}