#include <stdio.h>
#include "main.h"
#include <string.h> // Include for strpbrk function

/**
 * Searches for specific words within a string and prints them.
 * If not found, it returns null.
 */
void _strpbrk(const char *s, const char *locate[]) {
    for (int i = 0; locate[i] != NULL; i++) {
        const char *results = strpbrk(s, locate[i]);

        if (results != NULL) {
            printf("Found '%s' in the string.\n", locate[i]);
        } else {
            printf("'%s' not found in the string.\n", locate[i]);
        }
    }
}

int main() {
    const char *s = "Manchester United has been beaten 3 - 1 by Arsenal";
    const char *locate[] = { "Manchester United", "beaten" };

    _strpbrk(s, locate);

    return 0;
}
