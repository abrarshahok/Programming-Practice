import java.util.*;
public class String_Palindrome {
    public static void main(String[] args) {
        // Scanner Class
        Scanner in = new Scanner(System.in);
        String str = new String();
        String rev_str = new String();
        System.out.print("Enter a String  : ");
        str = in.nextLine();
        
        for(int i=str.length()-1; i>=0; i--){
            rev_str += str.charAt(i);
        }

        System.out.println("Original String : "+str.toLowerCase()+"\nReversed String : "+rev_str.toLowerCase());

        if((str.toLowerCase()).matches(rev_str.toLowerCase())){
            System.out.println("String is Palindrome");
        }
        else{
            System.out.println("String is not Palindrome");
        }
}
}              