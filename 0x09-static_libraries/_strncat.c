#include <stdio.h>
#include "main.h"

// Function to concatenate up to n characters from src to dest
char *_strncat(char *dest, const char *src, int n) {
char *initial_destination = dest; //store the initial destination

    // Move dest to the end of the string
    while (*dest !='\0')
	{
		*dest++;
	}
    // Concatenate up to n characters from src to dest
    while (*src != '\0' && n > 0) {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    // Null-terminate the concatenated string
    *dest = '\0';

    return initial_destination;
}

int main() {
    const char *dest ="samwel";//set as const meaning it cant be changed 
	const char *src ="okoth" ;//points to the src string;
    int n = 6;//defines the maximum amount of characters to concatanate from the src

    char *result = _strncat(dest, src, n);

    printf("Concatenated string: %s\n", result);

    return 0;
}
