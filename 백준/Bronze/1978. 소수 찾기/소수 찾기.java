import java.io.*;
import java.util.*;

public class Main {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws IOException{
				br.readLine();
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		int count = 0;
		while(st.hasMoreTokens()) {
			boolean isPrime = true;
			int num = Integer.parseInt(st.nextToken());
			if(num == 1) {
				continue;
			}
			for(int j = 2; j <= Math.sqrt(num); j++) {
				if(num%j == 0) {
					isPrime = false;
					break;
				}
			}
			if(isPrime) {
				count++;
			}
		}
		System.out.println(count);
	}
}