class Solution {
    public int gcd(int x, int y) {
        return x%y==0?y:gcd(y,x%y);
    }
    public int solution(int[] arr) {
        int gc, rlt = arr[0];
        for(int i=1;i<arr.length;i++)
            rlt=rlt*arr[i]/gcd(rlt,arr[i]);
        return rlt;
    }
}