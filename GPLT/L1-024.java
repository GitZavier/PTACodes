import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int today = input.nextInt();
    input.close();
    if (today > 0 && today < 8) {
      int ht = 0;
      ht = today + 2;
      if(ht > 7)
        ht -= 7;
      System.out.println(ht);
    }
  }

}