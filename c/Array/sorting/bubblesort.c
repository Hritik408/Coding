// #include <stdio.h>
// int main(){
//     int a[10],b[10],c[20],n,m,o;
//     printf("enter the size of array a and b\n");
//     scanf("%d %d",&n,&m);
//     o=n+m;
//     printf("enter the element of first array\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }  printf("\n enter the element of second array\n");
//     for(int i=0;i<m;i++)
//     scanf("%d",&b[i]);
//     printf("sorted first array\n");
//     for(int i=0;i<n;i++){              
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//             int temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;}
//         }
//     }  for(int i=0;i<n;i++)
//     printf("%d",a[i]);

//     printf("\nsorted second array\n");
//     for(int i=0;i<m;i++){
//         for(int j=i+1;j<m;j++){
//             if(b[i]>b[j]){
//             int temp=b[i];
//             b[i]=b[j];
//             b[j]=temp;}
//         }
//     }  for(int i=0;i<n;i++)
//     printf("%d",b[i]);

//     printf("\nmerge shorted array\n");
//      int j=0,k=0;
//     for(int i=0;i<o;i++){
//         if(a[j]<b[k]){
//             c[i]=a[j];
//             j++;
//         }  else{
//             c[i]=b[k];           
//             k++;
//         }
//     }   for(int i=0;i<o;i++){
//         printf("%d",c[i]);
//     } 

//     printf("\nmerge in descending order\n");
//     for(int i=o-1;i>=0;i--){
//         printf("%d",c[i]);
//     }

//     return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i= 0;i<n;i++)
    scanf("%d",&arr[i]);            //bubble sort..
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }   printf("\n sorted element");
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}