#include <stdio.h>
int main()
{

   int N;
   scanf("%d",&N);
   int first=1,second=1;
   while(second<N+1)
   {
        int result=first*second;
        printf("%dx%d=%d",first,second,result);
        if(result<10)
        {
            printf("   ");
        }
        else
        {
            printf("  ");
        }
        if(first<second)
        {
            first++;
        }
        else if(first==second)
        {
            printf("\n");
            first=1;
            second++;
        }        
   }
    return 0;
} 