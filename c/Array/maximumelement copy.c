#include<stdio.h>
void fun(int x[]){
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
   int m;
    scanf("%d",&m);
    int arr[m];
   int n=arr[0];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]); }
        
        printf("%d %d\n",arr[0],arr[1]);
        fun(arr);
        printf("%d %d\n",arr[0],arr[1]);
   
    return 0;
}