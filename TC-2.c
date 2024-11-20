#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if(n==1){
        count++;
        //printf("*");
    }
    else{
        count++;
        for(int i=1; i<=n; i++){
            count++;
            for(int j=1; j<=n; j++){
                count++;
                //printf("*");
                count++;
                //printf("*");
                count++;
          break;
          count++;
            }
            count++;
        }
        count++;
    }
    printf("%d",count);
 }