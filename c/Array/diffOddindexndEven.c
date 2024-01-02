#include <stdio.h>  
   int main (){
   int m,evenSum=0,oddSum=0;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]); 
      for (int i=0;i<m;i++){
        if(i%2==0)  evenSum+=arr[i];
        else oddSum+=arr[i];
      }
           printf("%d",evenSum-oddSum);
        return 0; }