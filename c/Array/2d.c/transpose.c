#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
   int arr[m][m];
   printf("enter the elements\n");
   for(int i=0;i<m;i++){
      for (int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);}

        } 
        for(int i=0;i<m;i++){
            for (int j=i;j<m;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
            
        }  printf("the transpose is\n");
         for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);}
            printf("\n");
        }
        return 0;
}