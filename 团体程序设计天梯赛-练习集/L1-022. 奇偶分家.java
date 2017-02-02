import java.util.Scanner;

public class Main {

	public static void main(String args[]) {
		int n;
		int i;
		int j = 0, o = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		String str;
		sc.nextLine();
		str = sc.nextLine();
		String[] strlist = str.split(" ");
		for (i = 0; i < n; i++) {
			if (Integer.parseInt(strlist[i]) % 2 == 0)
				o += 1;
			else
				j += 1;
		}
		System.out.println(j+" "+o);
	}

}