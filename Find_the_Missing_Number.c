#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int m, a, b, c, d;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        d = m / (a * b * c);
        if ((a * b * c * d) == m && a >= 0 && b >= 0 && c >= 0)
        {
            printf("%lld\n", d);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
