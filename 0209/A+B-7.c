#include<stdio.h>
int main()
{
    int count;
    int a, b;
    
    scanf("%d", &count);
    for(int i = 1; i <= count; i++)
    {
        scanf("%d %d", &a, &b);
        if(0 < a && b < 10) printf("Case #%d: %d\n", i,  a + b);
    }return (0);
}
