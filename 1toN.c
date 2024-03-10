#include <stdio.h>
void fun(int s, int n)
{
    if (s > n)
    {
        return;
    }
    printf("%d\n", s);
    fun(s+1,n);
}
int main()
{
    int f, n;
    scanf("%d %d", &f, &n);
    fun(f, n);
    return 0;
}
