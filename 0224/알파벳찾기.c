#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%s", word);

    for (int i = 0; i < 26; i++) //알파벳의 갯수만큼 반복
    {
        int j;
        for (j = 0; j < strlen(word); j++) //알파벳 = a > word 문자열 전체를 돎
        {
            if (alphabet[i] == word[j])
            {
                printf("%d ", j);
                break;
            }
        }
        if (j == strlen(word)) //그렇지 않다면 -1 출력
            printf("%d ", -1);
    }
    return (0);
}