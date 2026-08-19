#include <stdio.h>
int main()
{

   int N;
   scanf("%d",&N);
   int number=1,min=0,max=0;
   int reminder=0,dividend=0;
   int compare=0,cnt=N;

   while(N!=1)
   {
        number*=10;
        N--;
   }//计算N位数的范围；
   max=number*10;
   for(min=number;min<max;min++)
   {
        int sum=0;
        compare=min;
        dividend=min;
        while(dividend>0)
        {
            int temp=1;
            int temp_cnt=cnt;
            reminder=dividend%10;
            dividend/=10;
            while(temp_cnt>0)
            {
                temp*=reminder;
                temp_cnt--;
            }//计算数的N次幂
            sum+=temp;
        }
        if(sum==compare)
        {
            printf("%d\n",compare);
        }
   }


    return 0;
} 