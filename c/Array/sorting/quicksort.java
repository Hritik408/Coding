package c.Array.sorting;

public class quicksort {
    public static void main(String[] args) {
        int[] arr = {2,12,3,5,8};
        quicksort(arr,0,arr.length-1);
         for(int i =0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        } 
     System.out.println();
    }
    public static void quicksort(int[] arr, int low, int high){
        if(low<high){
            int pi = partision(arr,low,high);
            quicksort(arr, low, pi-1);
            quicksort(arr, pi+1, high);
        }
    }
    public static int partision(int[] arr, int low, int high){
        int pivot = arr[high];
        int i = low-1;
        for(int j= low;j<high;j++){
            if(arr[j]<pivot){
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }  
        i++;
        int temp = arr[i];
        arr[i] = pivot;
        arr[high] = temp;
        return i ;   // here i is the index of pivit
    }
}
