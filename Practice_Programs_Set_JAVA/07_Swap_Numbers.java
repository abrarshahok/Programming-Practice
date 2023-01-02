import java.util.*;
public class java_Methods {

    static void swap(int n1, int n2){

        int temp = n1;
        n1 = n2;
        n2 = temp;
        System.out.println("After Swaping First Num is : "+n1+"\nSecond Number is : "+n2);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter First Number : ");
        int num1 = input.nextInt();

        System.out.print("Enter Second Number : ");
        int num2 = input.nextInt();

        System.out.println("First Num is : "+num1+"\nSecond Number is : "+num2);

        swap(num1, num2);
    }
}
