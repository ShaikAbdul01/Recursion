#include <stdio.h>
int main()
{
    float x, p;
    scanf("%f %f", &x, &p);
    float dis = p / (1 - x / 100);
    printf("%.2f\n", dis);
    return 0;
}