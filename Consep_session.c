/* #include <stdio.h>
int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + fun(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int x=fun(n);
    printf("%d",x);
    return 0;
} */

/* #include <stdio.h>
void fun(int *ar, int n, int i)
{
    if (n == i)
        return;
    printf("%d ", ar[i]);
    fun(ar, n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    fun(ar, n, 0);
    return 0;
} */

/* #include <stdio.h>
void fun(int *ar, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", *(ar + i));
    // }
    if (n == 0)
        return;
    printf("%d ", *ar);
    fun(ar + 1, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    fun(ar, n);
    return 0;
} */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool fun(char *s, int i, int j)
{
    if (i >= j)
        return true;

    return fun(s, i + 1, j - 1) && s[i] == s[j];
}
int main()
{
    char s[] = "madam";
    bool res = fun(s, 0, 4);
    if (res == true)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}