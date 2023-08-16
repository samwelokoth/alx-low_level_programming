
#ifndef MAIN_H
#define MAIN_H

// Standard Library Headers
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Macros
#define UNUSED(x) (void)(x)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Typedefs
typedef unsigned int uint;
typedef unsigned long ulong;

// Function Prototypes
void print_hello(void);
int add_numbers(int a, int b);
void swap(int *a, int *b);

#endif /* MAIN_H */

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
