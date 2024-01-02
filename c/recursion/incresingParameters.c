#include <stdio.h>
void incresing( int x, int n){

    if(x>n)   return ;
    printf("%d\n",x);
      incresing(x+1,n);
     // return;
    }
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    incresing(1,n);
    return 0;
}

