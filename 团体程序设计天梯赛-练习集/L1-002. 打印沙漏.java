import java.util.Scanner;

public class Main{

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int n = input.nextInt();
    String str = input.next();
    input.close();
    if (n <= 1000 && n > 0) {
      int line = 0;
      while (((line+1)*(1+2*(line+1)-1)/2) *2 -1 <= n) 
        ++line;
      int left = n - (line*(1+2*line-1)-1);  // 求多余符号的个数
      for(int i=line;i>0;i--) {  // 上一半
        for(int s=0;s<line-i;s++)
          System.out.print(" ");
        for(int j=0;j<2*i-1;j++)
          System.out.printf("%s", str);
        System.out.println();
      }
      for(int i=2; i<=line; i++) {  // 下一半
        for(int s=i; s<line; s++)
          System.out.print(" ");
        for(int j=0; j<2*i-1; j++)
          System.out.printf("%s", str);
        System.out.println();
      }
      System.out.println(left);
    }
  }

}