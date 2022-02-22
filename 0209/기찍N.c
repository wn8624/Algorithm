#include <stdio.h>

int main() {
    int i = 0;
	int count; // 5
    int num = 0; //
	scanf("%d", &count);
    while (i < count)
    {
        num++;
        i++;
    }
    while (i > 0)
    {
        printf("%d\n", num);
        num--;
        i--;
    }
	return 0;
}