// TEST INCLUDES
#include <stdio.h>
#include <string.h>

/*
** Returns the length (number of characters before \0) of given string, \0 excluded.
** Same as the original strlen doesn't check whether the s is NULL.
** strlen is defined in <string.h>. 
*/

size_t      ft_strlen(const char *s)
{
    const char *str;

    str = s;
    while (*str)
        str++;
    return (str - s);
}

// TEST
int     main(void)
{
    if (ft_strlen("cellar") == strlen("cellar"))
        printf("%s", "OK\n");
    if (ft_strlen("") == strlen(""))
        printf("%s", "OK\n");
    if (ft_strlen("two\0words") == strlen("two\0words"))
        printf("%s", "OK\n");
    if (ft_strlen("two words") == strlen("two words"))
        printf("%s", "OK\n");

    return (0);
}

// (NULL) - error