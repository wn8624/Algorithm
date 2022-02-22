#include <stdio.h>
int main()
{
    int test;
    
    scanf("%d", &test);

    for (int i=0; i<test; i++)
    {
        int count = 0, stu = 0;
        float average = 0;

        scanf("%d", &stu); 
        float score[stu];

        for (int i=0; i<stu; i++)
        {
            scanf("%f", &score[i]); //5번 점수를 받아내서 배열에 저장
            average += score[i]; //동시에 총점을 구함
        } 
        average = average / stu; 
        for  (int i=0; i<stu; i++)
        {
            if  (score[i] > average)
            count++;  // 평균보다 넘는 학생의 수 
        }
        printf("%.3f%%\n", (float)count / stu * 100);//평균을 넘는 학생의 수의 비율 (평균을 넘는 학생의 수 count / 전체학생의 수) *100
    }
    return (0);
}