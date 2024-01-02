#include <stdio.h>  
   int main (){
   int m,x,pairs=0;
    scanf("%d",&m);
    int arr[m];
    printf("enter the given number");
    scanf("%d",&x);
    printf("enter the elements");
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]); 
      for (int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            for(int k=j+1;k<m;k++){
         if(arr[i]+arr[j]+arr[k]==x){
             printf("\n(%d,%d,%d)",arr[i],arr[j],arr[k]);
             pairs++;
        }
         
      }}}
           printf("\n%d",pairs);
        return 0; }