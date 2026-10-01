#include <assert.h>
#include <stdio.h>

/* Compact nonzero values in order, then fill the remaining positions with zero. */
void moveZeroes(int *nums, int numsSize) {
    int nextNonzero = 0;
    for (int index = 0; index < numsSize; index++) {
        if (nums[index] != 0) {
            nums[nextNonzero++] = nums[index];
        }
    }
    while (nextNonzero < numsSize) {
        nums[nextNonzero++] = 0;
    }
}

static void assertArrayEquals(const int *actual, const int *expected, int size) {
    for (int index = 0; index < size; index++) {
        assert(actual[index] == expected[index]);
    }
}

int main(void) {
    int first[] = {0, 1, 0, 3, 12};
    int firstExpected[] = {1, 3, 12, 0, 0};
    moveZeroes(first, 5);
    assertArrayEquals(first, firstExpected, 5);

    int second[] = {0, 0, 1};
    int secondExpected[] = {1, 0, 0};
    moveZeroes(second, 3);
    assertArrayEquals(second, secondExpected, 3);

    puts("Move Zeroes: all tests passed");
    return 0;
}