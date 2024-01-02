#include <stdio.h>  
   int main (){
   int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]); 
        int count=0;
        int x=15;
      for (int i=0;i<m;i++){
           if(arr[i]>x) {
            count++;
            printf("%d \n",arr[i]);
            } }
      
      printf("%d",count);
      
        return 0; }