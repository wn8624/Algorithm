#include<stdio.h>
int main()
{
    int i;
    int count;
    while (1)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (0 < a && b < 10)
        {
        printf("%d\n", a+b);
        }
        if (a == 0 && b == 0)
            break;
        i++;
    }
    return (0);
}