/* #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    printf("%d", max);
    return 0;
}
 */

#include <stdio.h>
int fun(int *ar, int n, int max)
{
    if (n == 0)
    {
        return max;
    }
    if (ar[n - 1] > max)
    {
        max = ar[n - 1];
    }
    return fun(ar, n - 1, max);
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
    int max = fun(ar, n, ar[0]);
    printf("%d", max);
    return 0;
}