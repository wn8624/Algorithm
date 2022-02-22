#include<stdio.h>
int main(void)
{
    int a, b, c, count, result, input, newNumber;

    count =0;
    scanf("%d", &input);
    result = input;
    while(newNumber != result)  
        {
            a = input / 10;
            b = input % 10;
            c = (a + b) % 10;
            newNumber = (b * 10) + c;
            input = newNumber;
            count++;
         }      
    printf("%d", count);
}
