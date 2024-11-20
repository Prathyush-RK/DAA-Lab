#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0) {
            printf("%d", abs(arr[i]));
            return 0;
        }
        arr[index] = -arr[index];
    }
    printf("No duplicate found\n");
    return 0;
}
