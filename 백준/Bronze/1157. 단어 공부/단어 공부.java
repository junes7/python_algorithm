import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] alpha = new int[26];
		String str = br.readLine();
		for(int i=0; i<str.length(); i++) {
			if(str.charAt(i)>=65 && str.charAt(i)<=90) {
				alpha[str.charAt(i)-65]++;
			} else {
				alpha[str.charAt(i)-97]++;
			}
		}
		int max = -1;
		char ch = '/';
		for(int i=0; i<26; i++) {
			if(alpha[i] > max) {
				max = alpha[i];
				ch = (char)(i+65);
			} else if(alpha[i] == max) {
				ch = '?';
			}
				
		}
		System.out.println(ch);
	}
}