import java.util.*;
public class Calculator_Function {

    public static int Sum(int num1, int num2){
        return num1+num2;
    }

    public static int Subtract(int num1, int num2){
        return num1-num2;
    } 

    public static int Multiply(int num1, int num2){
        return num1*num2;
    }

    public static float Divide(float num1, float num2){
        return num1/num2;
    }

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.print("Enter Num1 : ");
        int num1 = in.nextInt();
        System.out.print("Enter Num2 : ");
        int num2 = in.nextInt();
        System.out.print("Enter Operand : ");
        char opt = in.next().charAt(0);
        switch(opt){
            case '+':System.out.println("The Sum is : "+Sum(num1, num2));
            break;
            case '-':System.out.println("The Subtraction is : "+Subtract(num1, num2));
            break;
            case '*':System.out.println("The Multiplication is : "+Multiply(num1, num2));
            break;
            case '/':System.out.println("The Division is : "+Divide(num1, num2));
            break;
            default:System.out.println("Invalid Operand!");
        }
    }
}
