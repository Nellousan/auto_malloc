/*
** EPITECH PROJECT, 2020
** main test
** File description:
** 
*/

#include <stddef.h>
#include "a_malloc.h"
#include "my.h"

int main(void)
{
    a_malloc(A_MALLOC_FREE | A_LIST(5));
    char *a = a_malloc((sizeof(char) * 10) | A_LIST(1));
    char *d = a_malloc((sizeof(char) * 10) | A_LIST(1));
    char *b = a_malloc(sizeof(char) * 10);
    char *c = a_malloc((sizeof(char) * 10) | A_LIST(3));
    a[9] = 'H';
    a_malloc(A_MALLOC_FREE);
    a_malloc(A_MALLOC_FREE);
    a_malloc(A_MALLOC_FREE | A_LIST(1));
    a_malloc(A_MALLOC_FREE | A_LIST(3));
    return 0;
}
