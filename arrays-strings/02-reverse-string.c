#include <assert.h>
#include <stdio.h>
#include <string.h>

/* Swap matching characters from the two ends until they meet. */
void reverseString(char *s, int sSize) {
    for (int left = 0, right = sSize - 1; left < right; left++, right--) {
        char temporary = s[left];
        s[left] = s[right];
        s[right] = temporary;
    }
}

int main(void) {
    char first[] = "hello";
    reverseString(first, 5);
    assert(strcmp(first, "olleh") == 0);

    char second[] = "Hannah";
    reverseString(second, 6);
    assert(strcmp(second, "hannaH") == 0);

    puts("Reverse String: all tests passed");
    return 0;
}