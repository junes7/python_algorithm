import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		StringTokenizer st;
		int C = Integer.parseInt(br.readLine());
		int N=0, sum=0, avg=0, count=0; int[] score;
		double result=0.0;
		for(int i=0; i<C; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			N = Integer.parseInt(st.nextToken());
			avg=0;sum=0;count=0;result=0.0;
			score = new int[N];
			for(int j=0; j<N; j++) {
				score[j] = Integer.parseInt(st.nextToken());
				sum += score[j];		
			}
			avg = sum/N;
			for(int k=0; k<N; k++) {
				if(score[k] > avg) {
					count++;
				}
			}
			result = 100.0*count/N;
			sb.append(String.format("%.3f", result)+"%\n");
		}
		System.out.println(sb);
	}
}