#include <stdio.h>  
void reverse(int arr[]){
    int m;
    scanf("%d",m);
         for(int i=0,j=m-1;i<=j;i++,j--){
         int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
         return;
         }       
}
   int main (){
   int m,array;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]); 
     reverse(array);
     for(int i=0;i<m;i++){
        printf("%d",arr[i]);
     }
        return 0;}