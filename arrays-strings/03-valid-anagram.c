#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Compare lowercase English-letter counts instead of sorting either string. */
bool isAnagram(char *s, char *t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }

    int counts[26] = {0};
    for (int index = 0; s[index] != '\0'; index++) {
        counts[s[index] - 'a']++;
        counts[t[index] - 'a']--;
    }
    for (int letter = 0; letter < 26; letter++) {
        if (counts[letter] != 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    assert(isAnagram("anagram", "nagaram"));
    assert(!isAnagram("rat", "car"));

    puts("Valid Anagram: all tests passed");
    return 0;
}