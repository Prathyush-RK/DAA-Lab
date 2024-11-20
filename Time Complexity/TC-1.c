#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int i=1;
    count++;
    int s=1;
    count++;
    while(s<=n){
        count++;
        i++;
        count++;
        s+=i;
        count++;
    }
    count++;
    printf("%d",count);
}
