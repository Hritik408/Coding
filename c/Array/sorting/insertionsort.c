// #include<stdio.h>
// int main (){
//     int n;
//    printf("enter the no of elements\n");
//    scanf("%d",&n);
//    int arr[n];
//    printf("unsorted  elements\n");
//    for (int i=0;i<n;i++)
//    scanf("%d",&arr[i]);
//    for(int i=1;i<n;i++){
//     int j=i;
//     while(i>=1&&arr[j]<arr[j-1]){
//         int temp=arr[j];
//         arr[j]=arr[j-1];
//         arr[j-1]=temp;}
//         j--;  
//    }   printf("sorted elements\n");
//    for(int i=0;i<n;i++){
//     printf("%d",arr[i]);
//    }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<n;i++){
        int j=i;
        while(i>=1&&arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }   j--;
    }   for(int i=0;i<n;i++)
    printf("%d",arr[i]);

    
    return 0;
}