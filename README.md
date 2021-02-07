# Auto Malloc

This is what you can call a garbage collector, it stores your malloc pointers in linked lists.
The goal of this tool is to be as easy to use as the standard malloc.
Here is an example:

```c
#include "auto_malloc.h"
int main(void) {

  char *a = a_malloc(sizeof(char) * 10);           // This will be stored in list 0 (if no list is specified, list 0 is default)
  int *b = a_malloc(sizeof(int) * 30 | A_LIST(2)); // This will be stored in list 2
  char *c = a_malloc(sizeof(char) * 10);           // This will be stored in list 0
  
  a_malloc(A_MALLOC_FREE);                         // This will free list 0 (list 2 pointers are still usable)
  a_malloc(A_MALLOC_FREE | A_LIST(2);              // This will free list 2
  
  return 0;
}
```

I built this tool to help me make my school projects, meaning that i was forced to stick to school's coding style.\
I could have done a separate function to free the lists but we're not able to use global variable so i had to use a static variable insides the a_malloc() function to do the trick.\
\
If you want to use this tool, please do. Just keep in mind that if you free() an a_malloc'd pointer, it will surely crash when calling the a_malloc's free, since there's no way to tell in c if a pointer has already been free'd. Also there's some parameters to customize in the auto_malloc.h file.
