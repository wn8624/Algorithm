#include <stdio.h>

int main()
{
    int result = 1,  input, index;
    int num[10];

    for  (int i = 0; i < 10; i++)    num[i] = 0;  

    for  (int i = 0; i < 3; i++) 
    {
        scanf("%d", &input);
        result *= input;
    }

    for (int i=0; result>0; i++) 
    {
        index = result % 10; 
        num[index] += 1; 
        result /= 10;
    }
    
    for (int i=0; i<10; i++) printf("%d\n", num[i]); 
    return (0);
}