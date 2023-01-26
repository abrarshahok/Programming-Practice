public class _15_Factorial_of_Num_Recursive {
    public static int factorial(int n) {
        // Step 1 : Base Condition
        if(n==0||n==1){
            return 1;
        }
        else
        // Step 2 : Calculating Factorial
        return n*factorial(n-1);
    }
    public static void main(String[] args) {
        // Step 3 :  Calling factorial
        System.out.println(factorial(5));
    }
}
