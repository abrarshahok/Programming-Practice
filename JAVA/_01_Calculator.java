import java.util.*;
public class _01_Calculator {
    public static void main(String[] args) {
        //Clear Screen
        System.out.print("\033[H\033[2J");
        System.out.flush();
        
        char ans;
        do {
            Scanner in = new Scanner(System.in);
            System.out.print("Enter Number 1 : ");
            int num1 = in.nextInt();
            System.out.print("Enter Number 2 : ");
            int num2 = in.nextInt();
            System.out.print("Enter Operator : ");
            char opt = in.next().charAt(0);

            switch (opt) {
                case '+': System.out.print(num1 + num2);
                break;
                case '-': System.out.print(num1 - num2);
                break;
                case '*': System.out.print(num1 * num2);
                break;
                case '/': System.out.print(num1 / num2);
                break;
                default: System.out.print("Invalid Operand");
            }

            System.out.print("\n\nDo You Want to Perform another Operation : ");
            ans = in.next().charAt(0);
        }
        while (ans=='y'||ans=='Y');
    }
}
