#include <stdio.h>
int main()
{
    int num1, num2, c;
    scanf("%d %d", &num1, &num2);
    c = num2;
    for(int i=0; i<3; i++)
    {
        printf("%d\n", num1 * (num2 % 10));
        num2 = num2 / 10;
    }
    printf("%d", num1 * c);
    return (0);
}