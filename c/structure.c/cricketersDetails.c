#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricket{
       char name[40];
       int age;
       int matches;
       float average;
    } cricket; 
    // int n;
    // printf("no of players");
    // scanf("%d",&n);
    cricket arr[3];
    for(int i=0;i<3;i++){
        scanf("%[^\n]s\n",&arr[i].name);
        scanf("%d\n",&arr[i].age);
        scanf("%d\n",&arr[i].matches);
        scanf("%f\n",&arr[i].average);
    }   printf("output of following\n");
    for(int i=0;i<3;i++){
        printf(" Name:%s\n",arr[i].name);
        printf("Age:%d\n",arr[i].age);
        printf(" No of matches:%d\n",arr[i].matches);
        printf("Average:%f\n",arr[i].average);
    }
    return 0;
    
    
}