#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int rev = 0,rem;
    count++;
    while (n != 0){
       count++;
       rem = n % 10;
       count++;
       rev = rev * 10 + rem;
       count++;
       n/= 10;
       count++;
    }
    count++;
    count++;
    printf("%d",count);
}