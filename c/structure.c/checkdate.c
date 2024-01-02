#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }   date;
    date a,b;
      bool flag=true;
  printf("enter first variable details\n");
        scanf("%d %d %d",&a.date,&a.month,&a.year);
      printf("enter second variable details\n");
        scanf("%d %d %d",&b.date,&b.month,&b.year);
       if(a.date!=b.date)  flag=false;
       if(a.month!=b.month)  flag=false;
       if(a.year!=b.year)   flag=false;
       if(flag==true)   printf("dates are same");
       else printf("dates are not same");
     return 0;
}