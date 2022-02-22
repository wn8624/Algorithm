#include<stdio.h>
#include<limits.h>

int min_arr(int arr[], int N)
{
    int min = arr[0];
    for (int i =1; i < N; i++)
    {
        if (arr[i] < min) 
        min = arr[i];
    }
    return (min);
}

int max_arr(int arr[], int N)
{
    int max = arr[0];
    for (int i =1; i < N; i++)
    {
        if (arr[i] > max) 
        max = arr[i];
    }
    return (max);
}

int main()
{
    int N;
    int arr[1000000];
    scanf("%d", &N);
    for(int i =0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d %d", min_arr(arr, N), max_arr(arr, N));    
    return (0);
}