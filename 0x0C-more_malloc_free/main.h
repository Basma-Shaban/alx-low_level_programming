#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

/**
 * Desc: Header file containing prototypes for all functions,
 *       used in the "0x0C-more malloc, free" directory.
 */

int _putchar(char c);
void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(const char *s);
void *print_int(unsigned long int n);
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
int _isNumber(char *argv);

#endif
