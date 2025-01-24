import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws IOException{
		int T = Integer.parseInt(br.readLine());
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		for(int i = 0; i < T; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			int X = Integer.parseInt(st.nextToken());
			int Y = Integer.parseInt(st.nextToken());
			int distance = Y- X;
			int max = (int)Math.sqrt(distance);
			if(max == Math.sqrt(distance)) {
				sb.append(2*max-1+"\n");
			} else if(distance <= (max*max + max)) {
				sb.append(2*max+"\n");
			} else {
				sb.append(2*max+1+"\n");
			}
		}
		System.out.println(sb);
	}
}
