#include<stdio.h>
#include<stdbool.h>
int main(){
    int m,a;
     printf("enter no of elements");
    scanf("%d",&m);
    int arr[m];
   printf("enter all the elements");
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]);
        for (int i=0;i<m;i++){
            for (int j=i+1;j<m;j++){
                if(arr[i]==arr[j]){
                 printf("%d is duplicate element",arr[j]);
                 break;}
                
            }
        }
        return 0;}