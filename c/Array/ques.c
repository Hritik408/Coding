   #include <stdio.h>  //if odd index then multiply by 2 else add 10;
   int main (){
   int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
        scanf("%d",&arr[i]); 
     for (int i=0;i<m;i++){
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2;
     }
      for (int i=0;i<m;i++)
      printf ("%d ",arr[i]);


        return 0; }