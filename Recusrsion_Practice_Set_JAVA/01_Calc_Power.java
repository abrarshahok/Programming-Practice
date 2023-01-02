public class Calc_Power {
    public static int calcPow(int x, int n) {
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        int pow=x*calcPow(x, n-1);
        return pow;
        
    }
    public static void main(String[] args) {

        int ans = calcPow(5, 2);
        System.out.println(ans);
        
    }
    
}
