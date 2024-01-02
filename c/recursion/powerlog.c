#include <stdio.h>
int logpower(int a,int b){
    if(b==0) return 1;
    int x=logpower(a,b/2);
    if(b%2==0) return x*x;
    else return x*x*a;
    }
int main(){
    int a,b;
    printf("enter a base number");
    scanf("%d",&a);
    printf("enter a  power number ");
    scanf("%d",&b);
    int p=logpower(a,b);
    printf("%d",p);
    return 0;
}

