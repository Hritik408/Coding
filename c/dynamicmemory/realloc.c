#include<stdio.h>
#include<stdlib.h>
int* creatarray(int n){
    int* ptr;
    ptr=calloc(n,sizeof(int));
    return ptr;
}
int main(){  
int* ptr,n=100;
for(int i=1;i<=100;i++){
    ptr=creatarray(n);
    for(int j=0;j<n;j++)
    printf("%d\n",ptr[i]);
   free(ptr);
}
  return 0; 
}
// free( ) is used only for calloc,realloc and malloc..