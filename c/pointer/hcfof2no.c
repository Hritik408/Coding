#include<stdio.h>
int min(int a,int b){
    if(a>b) return b;
    else 
    return a;
}
int gcd(int a,int b){
    int hcf;
    for(int i= min(a,b);i>=1;i--){
    if(a%i==0&&b%i==0){
        hcf=i;
        break;
    }
    }   return hcf;
}
int main(){
   int a,b;
   printf("enter the value of a and b\n");
   scanf("%d %d",&a,&b);
   int hcf=gcd(a,b);
   int lcm=(a*b)/hcf;
   printf("the hcf of %d and %d is %d\n",a,b,hcf);
   printf("the lcm of %d and %d is %d",a,b,lcm);
    return 0;
}