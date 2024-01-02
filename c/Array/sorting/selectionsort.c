#include<stdio.h>
#include<limits.h>
int main(){
   int n;
   printf("enter the no of elements\n");
   scanf("%d",&n);
   int arr[n];
   printf("unsorted  elements\n");
   for (int i=0;i<n;i++)
   scanf("%d",&arr[i]);
 
   for(int i=0;i<n;i++){      //n-1 passes
   int min=INT_MAX;
   int minidx=-1;
   for(int j=i;j<n;j++){
    if(min>arr[j]){
        min=arr[j];
        minidx=j;
    }}
        int temp=arr[minidx];        //swap the no 
        arr[minidx]=arr[i];
        arr[i]=temp;
   
   }   printf("sorted elements\n");
   for(int i=0;i<n;i++){
    printf("%d",arr[i]);
   }

    return 0;
}


// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//    for(int i=0;i<n;i++){
//     int min=INT_MAX;
//     int minidx=-1;
//     for(int j=i;j<n;j++){
//         if(min>arr[j]){
//             min=arr[j];
//             minidx=j;
//         }
//     }   int temp=arr[minidx];
//     arr[minidx]=arr[i];
//     arr[i]=temp;
//    }    for(int i=0;i<n;i++)
//    printf("%d",arr[i]);
//     return 0;
// }