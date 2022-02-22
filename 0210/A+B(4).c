#include<stdio.h>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b ) != EOF)
    {
        if (0 < a && b < 10)
        {
        printf("%d\n", a+b);
        }
    }
    return (0);
}