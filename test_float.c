#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int a=0;
    printf("guess a number between 1 and 100\n");
    do
    {
        scanf("%d",&a);
        count++;
        if(a>number)
        {
            printf("high\n");
        }
        else if(a<number)
        {
            printf("low\n");
        }
    }
    while(a!=number);
    printf("this is right number,the number is %d,the count is %d\n",number,count);
    return 0;
} 