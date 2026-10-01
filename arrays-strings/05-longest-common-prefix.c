#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Shorten the first string's candidate prefix until every string matches it. */
char *longestCommonPrefix(char **strs, int strsSize) {
    if (strsSize <= 0) {
        return calloc(1, sizeof(char));
    }

    size_t prefixLength = strlen(strs[0]);
    for (int stringIndex = 1; stringIndex < strsSize; stringIndex++) {
        size_t characterIndex = 0;
        while (characterIndex < prefixLength &&
               strs[stringIndex][characterIndex] != '\0' &&
               strs[0][characterIndex] == strs[stringIndex][characterIndex]) {
            characterIndex++;
        }
        prefixLength = characterIndex;
    }

    char *prefix = malloc(prefixLength + 1);
    if (prefix == NULL) {
        return NULL;
    }
    memcpy(prefix, strs[0], prefixLength);
    prefix[prefixLength] = '\0';
    return prefix;
}

int main(void) {
    char *firstWords[] = {"flower", "flow", "flight"};
    char *firstPrefix = longestCommonPrefix(firstWords, 3);
    assert(firstPrefix != NULL && strcmp(firstPrefix, "fl") == 0);
    free(firstPrefix);

    char *secondWords[] = {"dog", "racecar", "car"};
    char *secondPrefix = longestCommonPrefix(secondWords, 3);
    assert(secondPrefix != NULL && strcmp(secondPrefix, "") == 0);
    free(secondPrefix);

    puts("Longest Common Prefix: all tests passed");
    return 0;
}