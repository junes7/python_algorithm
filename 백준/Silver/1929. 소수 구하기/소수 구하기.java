import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static boolean[] prime;
	public static void main(String[] args) throws IOException{
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		StringBuilder sb = new StringBuilder();
		int M = Integer.parseInt(st.nextToken());
		int N = Integer.parseInt(st.nextToken());
		prime = new boolean[N+1];
		prime[0] = true; prime[1] = true;
		for(int i=2; i<=Math.sqrt(prime.length); i++) {
			if(prime[i]) {
				continue;
			}
			for(int j=i*i; j<prime.length; j+=i) {
				prime[j] = true;
			}
		}
		for(int k=M; k<=N; k++) {
			if(prime[k] == false) {
				sb.append(k+"\n");
			}
		}
		System.out.println(sb);
	}
}