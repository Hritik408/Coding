#include <stdio.h>
int main(){
   int n,m;
   printf("enter no of element ");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }  printf("enter the target number ");
   scanf("%d",&m);
   int i=0;
   int j=n-1;
   while(i<j){
    if(arr[i]+arr[j]==m) {
        printf("%d %d\n",arr[i],arr[j]);
        }
    if(arr[i]+arr[j]<m)   i++;
    else j--;
   }

    return 0;
}