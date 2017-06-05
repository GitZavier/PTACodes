import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    DecimalFormat df = new DecimalFormat("#.0");
    Scanner sc = new Scanner(System.in);
    int H;
            H = sc.nextInt();
    double w = (H-100)*0.9*2;
    System.out.println(df.format(w));;
  }
  
}