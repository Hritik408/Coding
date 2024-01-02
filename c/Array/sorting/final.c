//  BUBBLE SORT
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }    
//     for(int i=0;i<n;i++)
//     printf("%d",arr[i]);
//     return 0;
// }    


//   SELECTION SORT
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     for(int i=0;i<n;i++){
//         int min=INT_MAX;
//         int minidx=-1;
//         for(int j=i;j<n;j++){
//             if(min>arr[j]){
//                 min=arr[j];
//                 minidx=j;
//             }       
//         }   int temp=arr[minidx];
//         arr[minidx]=arr[i];
//         arr[i]=temp;
//     }   for(int i=0;i<n;i++)
//     printf("%d",arr[i]);
//     return 0;

// }



//  INSERTION SORT
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(i>=1&&arr[j]<arr[j-1]){
//             int temp=arr[j];
//             arr[j]=arr[j-1];
//             arr[j-1]=temp;
//         } j--;
//     }   for(int i=0;i<n;i++)
//             printf("%d",arr[i]);
//             return 0;

// }