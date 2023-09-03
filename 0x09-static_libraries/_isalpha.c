#include "main.h"
#include<stdio.h>
/*
*Main-isalpha
*return : 0 if true else return 1;
*/


int is_alpha(int c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1; // It's an alphabet character
    } else {
        return 0; // It's not an alphabet character
    }
}
