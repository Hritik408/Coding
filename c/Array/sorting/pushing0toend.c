#include <stdio.h>
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];

    printf("enter the no of elements");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }  printf("\npushed the zeros");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } 
    return 0;
    }