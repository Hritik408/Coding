#include <stdio.h>
#include <limits.h>.
int main(){
    int m;
    scanf("%d",&m);
    int arr[m];
   int n=INT_MAX;
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]); }
        for(int i=0;i<m;i++){
            if(n>arr[i]) 
            n=arr[i];
            }
         printf("%d",n);
        
    return 0;
}