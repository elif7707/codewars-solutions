#include <stddef.h>
#include <string.h>
#include <ctype.h>

size_t get_count(const char *s)
{

    int i, len, count = 0;
    len = strlen(s);

    for (i = 0; i < len; i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {

            count++;
        }
    }

    return count;
}