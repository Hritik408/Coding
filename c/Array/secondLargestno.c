#include <stdio.h> 
#include <limits.h> 
   int main (){
   int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]);
        int max=INT_MIN;
        int Smax=INT_MIN; 
      for (int i=0;i<m;i++){
       if(max<arr[i]){
        Smax=max;
        max=arr[i];
       }
       else if(Smax<arr[i]&&max!=arr[i])
       Smax=arr[i];
      }
      printf("%d",Smax);
      
        return 0; }