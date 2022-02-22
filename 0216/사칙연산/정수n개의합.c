#include <stdio.h>
#include <string.h>

long long sum(int *a, int n)
{
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    return ans;
}
 
int main()
{
    int num;
    
    scanf("%d", &num);

    int arr[num];

    for (int i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%lld\n", sum(arr, num));
    return (0);
}