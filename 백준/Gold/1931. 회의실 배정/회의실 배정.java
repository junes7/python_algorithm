import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[][] times = new int[n][2];
		int min = -1;
		for(int i=0; i< times.length; i++) {
			times[i][0] = sc.nextInt();
			times[i][1] = sc.nextInt();
		}
		//-> 식별자 없이 실행 가능하다. 
		Arrays.sort(times,(a,b) -> a[1]==b[1]? a[0]-b[0] : a[1]-b[1]);
		/*public int num (int a, int b) {
			int temp; 
			if(a[1]==b[1]) {
				temp = a[0] - b[0];
			} else {
				temp = a[1] - b[1];
			}
			return temp;
		}*/
		int count = 0;
		for(int i=0; i<n; i++) {
			if(times[i][0] >= min) {
				min = times[i][1];
				count++;
			}
		}
		System.out.println(count);
	}
}