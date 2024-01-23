/*
Suppose you are given an array of integers in an arbitrary order. Write a recursive solution to find the maximum element from the array.
Input:
5
7 4 9 6 2
Output:
9
 */

#include <stdio.h>
int fun(int *ar, int n, int i)
{
    if (i == n - 1)
    {
        return ar[i];
    }
    int max = fun(ar, n, i + 1);
    if (ar[i] > max)
    {
        return ar[i];
    }
    return max;
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
    printf("%d\n", fun(ar, n, 0));
    return 0;
}