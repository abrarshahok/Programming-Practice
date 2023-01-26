import java.util.*;
public class _03_Fibonacci_Series{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter Number : ");
        int num = in.nextInt();
        int n1=0,n2=1;
        System.out.print("Fibonacci Series : ");
        for(int i=1;i<=num;i++){
            System.out.print(n1+" ");
            int n3=n1+n2;
            n1=n2;
            n2=n3;
        }
    }
}
