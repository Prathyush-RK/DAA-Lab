#include <stdio.h>

void find(int arr[], int l, int r, int x) {
    if (l >= r) {
        printf("No\n");
        return;
    }

    int sum = arr[l] + arr[r];
    if (sum == x) {
        printf("%d\n", arr[l]);
        printf("%d\n", arr[r]);
        return;
    } else if (sum < x) {
        find(arr, l + 1, r, x);
    } else {
        find(arr, l, r - 1, x);
    }
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

    find(arr, 0, n - 1, x);

    return 0;
}
