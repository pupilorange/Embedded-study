#include <stdio.h>
int main()
{

    int x;
    int t;
    int digit=1;
    scanf("%d", &x);
    t=x;
    while(t>9)
    {
        t/=10;
        digit*=10;
    }
    do
    {
        int temp=x/digit;
        printf("%d",temp);
        if(digit>9)
        {
            printf(" ");
        }
        x%=digit;
        digit/=10;
    }
    while(digit>0);
    
    return 0;
} 