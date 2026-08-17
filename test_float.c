#include <stdio.h>
int main()
{
    int x;
    double sum=0;
    int count=0;
    scanf("%d", &x);
    while(x!=-1)
    {
    sum+=x;
    count++;
    scanf("%d", &x);
    }
    printf("averge=%.1f,add number=%d", sum/count, count);
    return 0;
} 