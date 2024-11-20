#include<stdio.h>
int main(){
    int sum,count=0;
    scanf("%d",&sum);
    int arr[]={1000,500,100,50,20,10,5,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(sum>=arr[i]){
            count++;
            sum=sum-arr[i];
        }
    }
    printf("%d",count);
}
