#include <stdio.h>
int main()
{
    double a, b =0;
    scanf("%lf %lf", &a, &b);
    printf("%.13lf", a / b);
    return (0);
}