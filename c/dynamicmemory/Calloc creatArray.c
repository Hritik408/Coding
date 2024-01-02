#include<stdio.h>
#include<stdlib.h>
int* Creat_Array(int n){
    int* ptr;
    calloc(n,sizeof(int));
    // for(int i=0;i<n;i++)
    // ptr[i]=i+1;
    return ptr;
}
int main(){
    int* p,n=5;
    p=Creat_Array(n);
    for(int i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
    return 0;
}