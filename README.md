# auto_malloc
# Author: Nell Fauvau
# Language C/C++
Automatic malloc, stocked in linked lists

------------ USAGE -------------

char *str = a_malloc(sizeof(char) * 5 | A_LIST(2));

this will stock the pointer on the 2nd list.
A_LIST(x) is the macro used to select the list you want your pointer to be stocked.
If no list is specified, list 0 will be used.
to free a specific list of pointer, use:

a_malloc(A_MALLOC_FREE | A_LIST(2));

this will free the whole list 2.

If a free attempt is made on a empty list, a warning message will occur, and nothing will be done.
you can define how many list you want to use in a_malloc.h.
you can also define if warning message occurs in a_malloc.h.

To use this on your own project, simply put auto_malloc.c with your source files, and a_malloc.h on your include directory.

-------------- END --------------
