#ifndef MAIN_H
#define MAIN_H
/**
 *main - header file for protoypes
 *void protoypes (void)
 *int protoypes (int)
 */
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void reset_to_98(int *n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
void _puts(char *str);
int _putchar(char);
int _isupper(int);
int _isdigit(int);
int mul(int, int);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *cap_string(char *a);
char *leet(char *a);
char *rot13(char *a);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif /* MAIN_H */
