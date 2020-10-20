// TEST INCLUDES
#include <stdio.h>
#include <string.h>

#include "libft.h"
/*
** Copies n bytes from src to dst.
** If within this n bytes (unsigned char)c occurs in src, c is copied to dst
** and ptr to the next byte of dst is returned.
** If no c encounters, then copies n bytes and returns NULL.
** If dst and src overlap, behavior is undefined.
** memccpy is defined in <string.h>. 
*/