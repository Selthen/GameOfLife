# ifndef _ARRAYS_H_
# define _ARRAYS_H_

#include <stdio.h>
#include <stdbool.h>

bool check_if_char_in_array(char c, const char array[], int array_len);
bool check_if_int_in_array(int x, const int array[], int array_len);
void print_const_char_array(const char array[], int array_len, FILE* output);

# endif
