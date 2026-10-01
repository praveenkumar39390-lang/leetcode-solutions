#include <assert.h>
#include <stdio.h>

/* Halve the sorted search interval after each comparison. */
int search(int *nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target) {
            return middle;
        }
        if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

int main(void) {
    int numbers[] = {-1, 0, 3, 5, 9, 12};
    assert(search(numbers, 6, 9) == 4);
    assert(search(numbers, 6, 2) == -1);

    puts("Binary Search: all tests passed");
    return 0;
}