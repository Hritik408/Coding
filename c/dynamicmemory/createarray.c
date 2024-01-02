#include<stdio.h>
#include<stdlib.h>
int* Create_Array(int n){
    int* ptr;
    ptr=malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    ptr[i]=i+1;
    return ptr;
}

    int main(){
        int *p,n;
        printf("enter the elements");
        scanf("%d",&n);
        p = Create_Array(n);   //createarray with the help of malloc makes 5 int array and return array add
        for(int i=0;i<n;i++)
        printf("%d ",p[i]);
        return 0;
    }
