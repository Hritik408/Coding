
#include <stdio.h>
void decrese(int n){

    if(n==0)   return ;
    printf("%d\n",n);
    
      decrese(n-1);
      return;
    }
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    decrese(n);

 

    return 0;
}

