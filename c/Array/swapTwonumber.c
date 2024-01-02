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
   
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]); }
        fun(arr);
        printf("%d %d\n",arr[0],arr[1]);
   
    return 0;
}