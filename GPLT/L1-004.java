import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int F;
		int C;
		F  = input.nextInt();
		input.close();
		C = 5*(F-32)/9;
		System.out.printf("Celsius = %d\n", C);
	}

}