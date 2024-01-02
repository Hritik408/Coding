#include <stdio.h>
int main (){
   int arr[5]={1,3,4,5,6};
   int x=9;
   for (int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]+arr[j]==x){
            printf("%d %d\n",arr[i],arr[j]);
        }
    }
   }
    return 0;

}