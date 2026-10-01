#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/* Return the indices of the first pair whose values add to target. */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    *returnSize = 0;
    for (int first = 0; first < numsSize; first++) {
        for (int second = first + 1; second < numsSize; second++) {
            if (nums[first] + nums[second] == target) {
                int *indices = malloc(2 * sizeof(*indices));
                if (indices == NULL) {
                    return NULL;
                }
                indices[0] = first;
                indices[1] = second;
                *returnSize = 2;
                return indices;
            }
        }
    }
    return NULL;
}

int main(void) {
    int firstNumbers[] = {2, 7, 11, 15};
    int firstSize = 0;
    int *firstResult = twoSum(firstNumbers, 4, 9, &firstSize);
    assert(firstResult != NULL && firstSize == 2);
    assert(firstResult[0] == 0 && firstResult[1] == 1);
    free(firstResult);

    int secondNumbers[] = {3, 2, 4};
    int secondSize = 0;
    int *secondResult = twoSum(secondNumbers, 3, 6, &secondSize);
    assert(secondResult != NULL && secondSize == 2);
    assert(secondResult[0] == 1 && secondResult[1] == 2);
    free(secondResult);

    puts("Two Sum: all tests passed");
    return 0;
}