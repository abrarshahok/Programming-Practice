import java.util.*;
public class Array_Index {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        
        System.out.print("Enter Array Size : ");
        int n = in.nextInt();

        int key,i;
        int [] arr= new int[n];

        System.out.print("Enter Elements : ");
        for(i=0;i<n;i++){
            arr[i] = in.nextInt();
        }

        System.out.print("Enter Key : ");
        key = in.nextInt();
        
        for(i=0;i<n;i++){
            if(arr[i]==key){
            System.out.println("Array is at Index : "+i);
            System.out.println("Position of Array is : "+(i+1));
            }

            else{
                System.out.println("Key not Found!");
                break;
            }
        }
    }
    
}
