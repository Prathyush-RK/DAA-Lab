#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    for (int i = 1; i <= num;++i){
        count++;
        count++;
        if (num % i== 0){
            //printf("%d ", i);
            count++;
        } 
    }
    count++;
    printf("%d",count);
  }