#include "libft.h"
/*
** Allocates with malloc and returns an array
** of strings obtained by splitting ’s’ using the
** character ’c’ as a delimiter. The array must be
** ended by a NULL pointer.
** Returns array of new strings resulting from the split
** or NULL if malloc fails.
*/

static int      ft_getwords(char const *s, const char c)
{
    int words;

    words = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s && *s++ != c)
            words++;
        while (*s && *s != c)
            s++;
    }
    return (words);
}

static void     ft_copyword(char *dst, const char *src, size_t letters)
{
    while (--letters)
        *dst++ = *src++;
    *dst = '\0';
}

static int     ft_putwords(char const *s, char c, int words, char **split)
{
    char const  *start;
    int         w;
    size_t      letters;

    w = 0;
    while (words--)
    {
        while (*s && *s == c)
            s++;
        start = s;
        while (*s && *s != c)
            s++;
        letters = s - start;
        split[w] = (char *)malloc(letters + 1);
        if (!split[w])
            return (w);
        ft_copyword(split[w++], start, letters + 1);
    }
    return (0);
}

char    **ft_split(char const *s, char c)
{
    int     words;
    int     error;
    char    **split;

    if (!s)
        return (NULL);
    words = ft_getwords(s, c);
    split = (char **)malloc(sizeof(char *) * (words + 1));
    if (!split)
        return (NULL);
    split[words] = NULL;
    error = ft_putwords(s, c, words, split);
    if (!error)
        return (split);
    while (error--)
        free(split[error]);
    free(split);
    return (NULL);
}

// ("string", '\0'), ("", 'b'), ("string", 'g')
// ("aaabbaabbaaa", 'a') -- bb, bb, NULL

// tests for number of words:
// ft_split("aafooaafoo2aa", 'a')
// ft_split("abba", 'a')
// ft_split("saaaw", 'a')
// ft_split("abb", 'a')
// ft_split("bbda", 'a')
// ft_split("aaaa", 'a') - 0 words
// ft_split("", 'a') - 0 words
// ft_split("abba", '') - will not compile
