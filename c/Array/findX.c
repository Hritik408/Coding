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
    printf("enter the value of a");
    scanf("%d",&a);
    bool flag=false;
    int index=0;
   
        for (int i=0;i<m;i++){
            if(arr[i]==a) {
               flag=true; 
               index=i;
                break; }
        }  if(flag==false) printf("%d is not present",a);
        else printf("%d is present and its index is %d",a,index);
        return 0;
        }