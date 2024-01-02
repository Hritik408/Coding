#include<stdio.h>
int main(){
    int  e,n,count=0;
    scanf("%d",&e);
    int arr[e];
    for(int i=0;i<e;i++)
    scanf("%d",&arr[i]);
    printf("enter given number ");
    scanf("%d",&n);
    
    for(int i=0;i<e;i++){
        if(arr[i]==n)
        continue;
        printf("%d",arr[i]);
        count++;
    }  printf("\n%d",count);
}