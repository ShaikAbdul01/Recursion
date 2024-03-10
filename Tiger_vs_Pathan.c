#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        int t=0, p=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                t++;
            }
            else if (s[i] == 'P')
            {
                p++;
            }
        }
        if (p > t)
        {
            printf("Pathaan\n");
        }
        else if (t > p)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}