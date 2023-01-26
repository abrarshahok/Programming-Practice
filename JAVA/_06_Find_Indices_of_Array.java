import java.util.*;
public class _06_Find_Indices_of_Array {
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        System.out.print("Enter no of Rows : ");
        int Rows = in.nextInt();
        System.out.print("Enter no of Colomns : ");
        int Cols = in.nextInt();
        
        // Defining 2d Array
        int [][]matrix = new int [Rows][Cols];
        
        // Taking Input
        System.out.println("Enter Elements");

        //Rows
        for(int i=0; i<Rows;i++){
            //Colomns
            for(int j=0; j<Cols; j++){
                matrix[i][j]=in.nextInt();
            }
        }
        
        // Output
        System.out.println("Matrix");

        //Rows
        for(int i=0; i<Rows;i++){
            //Colomns
            for(int j=0; j<Cols; j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
        
        // Find Indices of Number (Rows & Colomns Number)
        System.out.print("Enter Number to Find its Indices : ");
        int num = in.nextInt();

        for(int i=0; i<Rows; i++){
            for(int j=0; j<Cols; j++){
                if(matrix[i][j]==num){
                    System.out.print("Found at : ( Row : "+(i+1) +", Colomn : "+(j+1) +" )");
                }
            }
        }
        
    }
}
