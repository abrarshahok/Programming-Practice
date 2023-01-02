public class Bubble_Sort {
    public static void main(String[] args) {
        int arr[] = {6,9,2,5,1,3};
        
        // Bubble Sort
        for(int i=0; i<arr.length-1; i++) // Counter (n-1)
        {
            for(int j=0; j<arr.length-i-1; j++) // (n-i-1)
            {
                if(arr[j]>arr[j+1])
                {
                    // Swapping
                    int swap = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = swap;
                }
            }
        
        }
        // Printing Array
        for(int j=0; j<arr.length; j++){
            System.out.println(arr[j]);
        }
    }
}
