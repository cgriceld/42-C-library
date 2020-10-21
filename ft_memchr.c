// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Returns a pointer to the first occurence of 
** (unsigned char)c in the string s or NULL otherwise.
** ?? c can be \0, then returns pointer to \0.
** Same as the original strchr doesn't check whether the s is NULL.
** memchr is defined in <string.h>. 
*/