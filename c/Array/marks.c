  #include <stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);   }
        for(int i=0;i<m;i++){
            if(arr[i]<35) printf("%d %d\n",i,arr[i]);
        }
    return 0;
}