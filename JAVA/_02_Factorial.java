import java.util.*;

public class _02_Factorial{
    // Find factorial 
    public static int factorial(int num){
        int factorial=1;
        for(int i=1;i<=num;i++){
            factorial=factorial*i;
        }
        return factorial;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Number to Find Factorial : ");
        int num = input.nextInt();
        System.out.println("Factorial of "+num +" is : "+factorial(num));
    }
}
