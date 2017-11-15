import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int[] numbers = new int[10];
        Scanner input = new Scanner(System.in);
        String number = input.next();
        input.close();
        for (char c : number.toCharArray()) {
            numbers[c - '0']++;
        }
        for (int i = 0; i < 10; i++) {
            if (numbers[i] != 0) {
                System.out.println(i + ":" + numbers[i]);
            }
        }
    }
}