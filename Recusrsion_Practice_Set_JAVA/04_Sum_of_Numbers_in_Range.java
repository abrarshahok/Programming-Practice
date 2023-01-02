import java.util.*;
public class Print_Sum {

    public static void printSum(int i, int n, int sum) {
        if(i==n){
            sum+=i;
            System.out.println(sum);
            return;
        }
        sum+=i;
        printSum(i+1, n, sum);
    }
    public static void main(String[] args) {
        int sum=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Starting Number : ");
        int start = input.nextInt();
        System.out.print("Enter Ending Number   : ");
        int end = input.nextInt();
        System.out.print("The Sum of Number From "+start+" to "+end+" is : ");
        printSum(start, end, sum);
        
    }
    
}

