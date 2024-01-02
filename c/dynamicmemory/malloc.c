#include <stdio.h>
#include<stdlib.h>
int main(){
   int* p;
    p=(int *)malloc(sizeof(int)*5);
     // p=malloc(sizeof(int)*5);   this can also be write .
    for(int i=0;i<5;i++){
        printf("enter element no %d ",i+1);
        scanf("%d",p+i);
    }
     printf("\n");
    for(int i=0;i<5;i++){
   printf("%d\n ",(p+i));         //add store 
   printf("%d ",*(p+i)); }        //value of add store    *(p+i) =p[i]..

    return 0;
}