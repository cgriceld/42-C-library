#include "libft.h"
/*
** Appends src to the end of dst, append at most dstsize-len(dst)-1 characters.
** NUL-terminating the result unless dstsize = 0
** or dst is actually longer than dstsize.
** Returns len(src) + min(dstsize, len(dst)).
** If src and dst overalap - underfined. String is truncated if src > dst.
** strlcat is defined in <string.h>. 
*/

size_t      ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    char        *dstart;
    char        *dend;
    const char  *s;

    dstart = dst;
    while (dstsize-- && *dst)
        dst++;
    dend = dst;
    s = src;
    if (dstsize && !*dst) //*
    {
        while (*src && dstsize--) //**
            *dst++ = *src++;
        *dst = '\0';
    }
    while (*src)
        src++;
    return ((dend - dstart) + (src - s));
}

 //* to prevent case when size is still left (not 0), but dst isn't ended,
 // so we may start overwrite the not ended dst
 
 //** in first while when dst ended we already decrement size (space for \0),
 // so no we decrement after, not before