import java.util.Stack;
class Solution {
    public int solution(String s) {
        int rlt = 0;
        for(int i=0;i<s.length();i++) {
            Stack<Character> stack= new Stack<>();
            String st=s.substring(i,s.length())+s.substring(0,i);
            for(int j=0;j<st.length();j++) {
                char c=st.charAt(j);
                if(stack.isEmpty()) {
                    stack.push(c);
                } else if(stack.peek()=='(' && c==')') {
                    stack.pop();
                } else if(stack.peek()=='{' && c=='}') {
                    stack.pop();
                } else if(stack.peek()=='[' && c==']') {
                    stack.pop();
                } else {
                    stack.push(c);
                }
            }
            if(stack.isEmpty()) {
                rlt++;
            }
        }
        return rlt;
    }
}