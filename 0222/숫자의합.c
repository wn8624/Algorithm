#include <stdio.h> //첫번째 입력받은 숫자만큼 문자열을 입력한다. . > 입력받은 문자 하나하나를 더한 값 int를 출력한다
int main()
{
    int N, sum = 0;
    scanf("%d", &N); //정수를 입력받아 N에 저장한다.

    char num[N]; //문자형 요소 N개만큼의 배열을 선언한다.

    scanf("%s", num); //문자열을 입력받아 num이라는 배열에 저장한다. 이떄 입력받는 문자의 갯수가 N을 넘어가면 안될것이다.

    for (int i = 0; i < N; i++)
        sum += num[i] - '0'; //문자열의 인덱스 0 부터 N까지의 요소를 하나씩 더해주는데 이 때 0을 뺴주면 char형이 아닌 int형의 값이 더해질것이다.

    printf("%d", sum);

    return (0);
}