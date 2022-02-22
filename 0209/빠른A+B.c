#include <stdio.h>

int main() {
	int count;
    int num = 1;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		printf("%d\n", num);
        num++;
	}return 0;
}