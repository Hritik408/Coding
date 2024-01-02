#include<stdio.h>
int main(){
    int arr[]={10,20,30,40};
   int* ptr=arr;   //here ptr declare pointer which store add of first element of array.
   ++*ptr++;    //++*(ptr++)
    printf("%d %d %d %d",arr[0],arr[1],arr[2],*ptr);
    return 0;
}   //important   only ptr means add of first element of array.

  