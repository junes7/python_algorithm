import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		StringBuilder sb = new StringBuilder();
		int hour = Integer.parseInt(st.nextToken());
		int min = Integer.parseInt(st.nextToken());
		int temp = 0;
		if(min>=45) {
			min = min - 45;
		} else { //min < 45
			if(0 < hour && hour <= 23) {
				temp = 45 - min;
				hour = hour - 1;
				min = 60 - temp;
			} else { // hour == 0
				hour = 24 - 1;
				temp = 45 - min;
				min = 60 - temp;
			}
		}
		sb.append(hour).append(" ").append(min);
		System.out.println(sb);
	}
}