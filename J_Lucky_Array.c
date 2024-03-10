#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int isOdd = 0, isEven = 0, sm = INT_MAX, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sm > ar[i])
        {
            sm = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (sm == ar[i])
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
    return 0;
}