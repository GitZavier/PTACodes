import java.util.Scanner;

public class Main {

	// 边界问题注意啊 -_-||，坑

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int jlA, jlB;
		jlA = in.nextInt();
		jlB = in.nextInt();
		int records = in.nextInt();
		in.nextLine();
		int winesA = 0, winesB = 0;
		for (int i = 0; i < records; i++) {
			String[] cur = in.nextLine().split(" ");
			int a1 = Integer.valueOf(cur[0]);
			int a2 = Integer.valueOf(cur[1]);
			int b1 = Integer.valueOf(cur[2]);
			int b2 = Integer.valueOf(cur[3]);
			if (a2 == b2)
				continue;
			else {
				if (a2 == a1 + b1)
					winesA++;
				else if (b2 == a1 + b1)
					winesB++;
			}
			if (winesA > jlA || winesB > jlB)
				break;
		}
		in.close();
		System.out.println(winesA > jlA ? "A\n" + winesB : "B\n" + winesA);
	}

}
