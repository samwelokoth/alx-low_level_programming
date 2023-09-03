#include <stdio.h>
#include "main.h"

char *_strncpy(char *dest, const char *src, int n) {
    char *start_destination = dest;  // Store the start of the destination

    while (*src != '\0' && n > 0) {
        *dest = *src;  // Copy the character from src to dest
        dest++;        // Move to the next position in dest
        src++;         // Move to the next position in src
        n--;           // Decrease the remaining characters to copy
    }

    // If there are still more characters to copy or src is shorter, fill with '\0'
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    return start_destination;
}

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Make sure destination has enough space

    int n = 5; // Number of characters to copy

    char *result = _strncpy(destination, source, n);

    printf("Source: %s\n", source);
    printf("Destination after strncpy: %s\n", destination);

    return 0;
}
