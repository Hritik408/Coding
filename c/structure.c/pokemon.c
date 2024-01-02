#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon
    {
      int hp;
      int attack;
      char tier;
      char name[34];
      int speed;
    }pokemon;
    pokemon arr[3];
    printf("fill the details\n");
//    arr[0].attack=50;
//     arr[0].hp=200;
//    arr[0].speed=49;
//    arr[0].tier='A';
//    strcpy(arr[0].name,"chirizard");

//    arr[1].attack=50;
//    arr[1].hp=200;
//    arr[1].speed=49;
//    arr[1].tier='C';
//    strcpy(arr[1].name,"meoto");

//    arr[2].attack=50;
//    arr[2].hp=200;
//    arr[2].speed=49
//    arr[2].tier='a';
//    strcpy(arr[2].name,"shinchan");
    for(int i=0;i<3;i++){
        scanf("%[^\n]s\n",&arr[i].name);
        scanf("%d\n",&arr[i].speed);
        scanf("%d\n",&arr[i].attack);
        scanf("%c\n",&arr[i].tier);
        scanf("%d\n",&arr[i].hp);
       }
    printf("output of following\n" );
    for(int i=0;i<3;i++){
        printf("Name:%s\n",arr[i].name);
        printf("speed:%d\n",arr[i].speed);
        printf("attack:%d\n",arr[i].attack);
        printf("tier:%c\n",arr[i].tier);
        printf("hp:%d\n",arr[i].hp);
    }
        return 0;
    }
    
