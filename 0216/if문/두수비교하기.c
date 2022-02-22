#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    if (90 <= test && test <= 100)
    printf("A");
    else if (80 <= test && test <= 89)
    printf("B");
    else if (70 <= test && test <= 79)
    printf("C");
    else if (60 <= test && test <= 69)
    printf("D");
    else
    printf("F");
    return (0);
}