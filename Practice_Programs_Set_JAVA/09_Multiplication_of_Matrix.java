import java.util.*;
public class Arrays_Prob {
    public static void main(String[] args) {
        // Multi Dimensional Array
        Scanner input = new Scanner(System.in);

        System.out.print("Enter Number of Rows    : ");
        int row = input.nextInt();
        System.out.print("Enter Number of Columns : ");
        int col = input.nextInt();

        int [][]arr = new int [row][col];
        int [][]arr2 = new int [row][col];
        int [][]Mult= new int [row][col];

        System.out.print("Enter Elements of First Matrix : ");
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr.length; j++){
                arr[i][j] = input.nextInt();
            }
        }

        System.out.print("Enter Elements of 2nd Matrix   : ");
        for(int i=0; i<arr2.length; i++){
            for(int j=0; j<arr2.length; j++){
                arr2[i][j] = input.nextInt();
            }
        }

        // Logic for Multiplication
        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr.length; j++){
                for(int k=0; k<arr.length; k++){
                    Mult[i][j]+=(arr[i][k]*arr2[k][j]);
                }
            }
        }

        for(int i=0; i<arr.length; i++){
            for(int j=0; j<arr.length; j++){
                System.out.print(Mult[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
