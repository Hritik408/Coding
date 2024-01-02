#include <stdio.h>  
   int main (){
   int m,evenSum=0,oddSum=0;
    scanf("%d",&m);
    int arr[m],brr[m];
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]); 
      for(int j=0;j<m;j++){
         brr[j]=arr[m-1-j];
      } for(int i=0;i<m;i++)
       printf("%d",brr[i]);
        return 0; }
