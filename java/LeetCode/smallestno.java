package LeetCode;

public class smallestno {
    public static void main(String[] args) {
        char[] arr = {'a','d','s','t'};
        char target = 'b';
        char ans = binaryseach(arr,target);
        System.out.println(ans);
        // cealing of a number..  smaller no >= to target
    }   static  char binaryseach(char[] arr,char target){
        int start = 0;
        int end = arr.length-1;
        while(start<=end){
          int  mid = start+(end-start)/2;
            if(arr[mid]<target)  start=mid+1;
            else if((arr[mid]>target) ) end = mid-1;
            else return arr[start] ;
        }   return arr[start%arr.length];
    }
}
