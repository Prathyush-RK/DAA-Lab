#include<stdio.h>
int count(int a[],int low,int high);

int main(){
    int n,a[20],zero;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    zero=count(a,0,n-1);
    printf("%d",zero);
}

int count(int a[],int low,int high){
    int left,right,mid;
    if(low==high)
        return 1-a[low];
    
    mid=(low+high)/2;
    left=count(a,low,mid);
    right=count(a,mid+1,high);
    return (left+right);
}
