#include <stdio.h>
void reverse( int arr[],int  si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }  // return;
}
int main(){
    int m,a,b;
    printf("enter no of elements");
    scanf("%d",&m);
   int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i] );}
        int k;
        printf("enter the value of k");
        scanf("%d",&k);
        k=k%m;
        reverse(arr,0,m-1);
        reverse(arr,0,k-1);
        reverse(arr,k,m-1);
    
     for(int i=0;i<m;i++){
        printf("%d",arr[i]);
    }

}