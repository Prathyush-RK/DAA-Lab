#include <stdio.h>

int intersect(int arr[], int l, int h, int n) {
    if (l >= h) {
        if(n==arr[l]){
            return arr[l];
        }
        else{
            return -1;
        }
    }

    int mid = (l + h) / 2;

    if (n == arr[mid]) {
        return arr[mid];
    } else if (n > arr[mid]) {
        return intersect(arr, mid + 1, h, n);
    } else {
        return intersect(arr, l, mid - 1, n);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int n1, n2;
    
    scanf("%d", &n1);
    int a1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    
    scanf("%d", &n2);
    int a2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    
    for (int i = 0; i < n1; i++) {
        int res = intersect(a2, 0, n2 - 1, a1[i]);
         if(res>-1){
             printf("%d ",res);
         }
    }
}
