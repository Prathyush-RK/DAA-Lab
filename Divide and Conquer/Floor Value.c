#include <stdio.h>

int floorVal(int arr[], int l, int r, int x) {
    if (x < arr[l]) 
        return -1; 
        
    if (l == r) {
        if (arr[l] <= x) {
            return arr[l]; 
        } else {
            return -1;
        }
    }

    int mid = (l + r) / 2;

    if (arr[mid] == x) {
        return arr[mid];
    }
    else if (arr[mid] < x) {
        int rightFloor = floorVal(arr, mid + 1, r, x);
        return rightFloor != -1 ? rightFloor : arr[mid];
    }
    else {
        return floorVal(arr, l, mid - 1, x);
    }
}

int getFloor(int arr[], int n, int x) {
    return floorVal(arr, 0, n - 1, x);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    int floorV = getFloor(arr, n, x);
    if (floorV != -1) {
        printf("%d\n",floorV);
    } else {
        printf("%d\n", x);
    }

    return 0;
}
