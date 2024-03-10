/* #include <stdio.h>
#include <string.h>
int fun(char *s, int i, int count)
{
    if (s[i] == '\0')
        return count;

    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        count++;
    }
    return fun(s, i + 1, count);
}
int main()
{
    char s[204];
    fgets(s, 204, stdin);
    // printf("%s",s);

    int count = fun(s, 0, 0);
    printf("%d\n", count);
    return 0;
}
 */

#include <stdio.h>

int fun(char *s, int i, int count)
{
    if (s[i] == '\0')
    {
        return count;
    }
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        count++;
    }
    return fun(s, i + 1, count);
}
int main()
{
    char s[205];
    fgets(s, 205, stdin);
    // printf("%s", s);

    int count = fun(s, 0, 0);
    printf("%d\n", count);
    return 0;
}