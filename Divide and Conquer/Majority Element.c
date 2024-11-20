#include <stdio.h>

int majorityElement(int nums[], int size) {
    int c = nums[0], count = 1;

    // Find the candidate
    for (int i = 1; i < size; i++) {
        if (nums[i] == c) {
            count++;
        } else {
            count--;
            if (count == 0) {
                c = nums[i];
                count = 1;
            }
        }
    }
    return c;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("%d\n", majorityElement(nums, n));
    return 0;
}
