#include <stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0,downways =0;
   if(cr==er && cc==ec) return 1;
   if(cr==er) rightways+=maze(cr,cc+1,er,ec);
   if(cc==ec) downways+=maze(cr+1,cc,er,ec);
   if(cr<er && cc<ec){
    rightways+=maze(cr,cc+1,er,ec);
    downways+=maze(cr+1,cc,er,ec);
   } 
   return rightways+downways;

    }
int main(){
    int a,b;
    printf("enter a number of rows");
    scanf("%d",&a);
    printf("enter a number of columns ");
    scanf("%d",&b);
    int x=maze(1,1,a,b);
    printf("%d",x);
    return 0;
}

