import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static boolean[] prime;
	public static void main(String[] args) throws IOException{
		StringBuilder sb = new StringBuilder();
		int count = 0;
		while(true) {
			int n = Integer.parseInt(br.readLine());
			if(n==0) {
				break;
			}
			//initialize the counter
			count = 0;
			prime = new boolean[2*n+1];
			get_prime();
			for(int i=n+1; i<=2*n; i++) {
				if(prime[i] == false) {
					count++;
				}
			}
			sb.append(count+"\n");
			
		}
		System.out.println(sb);
	}
	public static void get_prime() {
		prime[0] = prime[1] = true;
		for(int i = 2; i <= Math.sqrt(prime.length); i++) {
			if(prime[i]) { // prime[i] == true
				continue;
			}
			for(int j=i*i; j < prime.length; j+=i) {
				prime[j] = true;
			}
		}
	}
}