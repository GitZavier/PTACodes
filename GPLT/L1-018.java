// L1-018. 大笨钟
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String curTime = in.nextLine();
		in.close();
		String[] curHM = curTime.split(":");
		if (Integer.valueOf(curHM[0]) <= 12) {
			System.out.println("Only " + curTime + ".  Too early to Dang.");
		} else {
			int t = Integer.valueOf(curHM[0]) - 12;
			t += Integer.valueOf(curHM[1]) > 0 ? 1 : 0;
			for (int i = 0; i < t; i++) {
				System.out.print("Dang");
			}
			System.out.println();
		}
	}

}
