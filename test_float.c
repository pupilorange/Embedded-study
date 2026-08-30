prime_number:
#include <stdio.h>
int main()
{

    int m,n;
    scanf("%d %d",&m,&n);
    int number,cnt=0,sum=0;
    int prime_number;
    for(number=m;number<=n;number++)//依次提供[m,n]中的所有数字
    {
        if(number==1)
        {
            continue;//若m=1,因为1不是素数，因此除去1
        }
        else
        {
            for(prime_number=2;prime_number<=number;prime_number++)//依次提供[2,number]中的所有数字
            {
                if(number%prime_number==0&&prime_number!=number)//判断[2,number)是否有数字可以整除number
                {
                    break;//找到第一个可以整除number的数字，说明number不是素数，进入下一个number的判断
                }
                else if(prime_number==number)
                {
                    sum+=number;//直到prime_number=number都没有退出这层循环，说明number是素数
                    cnt++;
                }
                //将[2,m]中的数依次对[m,n]中依次取出的数求余数
            }
        }  
    }
    printf("%d %d\n",cnt,sum);
    
    //int m,n;
    // scanf("%d %d",&m,&n); 
    // int cnt=0,sum=0,i;
    // if(m==1)
    // {
    //     m=2;
    // }
    // for(i=m;i<=n;i++)
    // {
    //     int k;
    //     int is_Prime=1;        //使用变量判断表示是否为素数
    //     for(k=2;k<i-1;k++)     //任意自然数i>2,因为i和i-1是连续的自然数，最大公约数为1，i-1不可能是i的因数，因此无需遍历到i-1
    //     {
    //         if(i%k==0)
    //         {
    //             is_Prime=0;
    //             break;
    //         }
    //     }
    //     if(is_Prime)
    //     {
    //         cnt++;
    //         sum+=i;
    //     }
    // }
    // printf("%d %d\n",cnt,sum);

    return 0;
} 

9x9:
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

shuixianhuashu:
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

number_aggregation:
#include <stdio.h>
int main()
{

    int A,i=0,cnt=0,x=0,y=0;
    scanf("%d",&A);
    int max=A+4;
    for(i=A;i<max;i++)
    {
        for(x=A;x<max;x++)
        {
            for(y=A;y<max;y++)
            {
                if(x!=i&&y!=i&&y!=x)
                {
                    printf("%d%d%d",i,x,y);
                    cnt++;
                    if(cnt<6)
                    {
                        printf(" ");
                    }    
                    else
                    {
                        printf("\n");
                        cnt=0;
                    }
                }
            }
        }
    }

    return 0;
} 

order_number:
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

coin_assemble:
#include <stdio.h>
int main()
{

    int amount;
    int x,y,z;
    printf("Be assembled amount:");
    scanf("%d",&amount);
    for(x=1;x<amount*10;x++)
    {
        for(y=1;y<(amount*10)/2;y++)
        {
            for(z=1;z<(amount*10)/5;z++)
            {
                if(x+2*y+5*z==(amount*10))
                {
                    printf("amount can be assembled with %dge 1jiao, %dge 2jiao, and %dge 5jiao.\n", x, y, z);
                    goto out;//使用goto语句跳出多重循环只显示一次结果，显示全部结果则要去除goto语句
                }
            }
        }
    }
    out:
    return 0;
} 

reverse_order:
#include <stdio.h>
int main()
{
    int x;
    int y=0;
    int temp=0;
    scanf("%d",&x);
    while(x>0)
    {
        temp=x%10;
        printf("%d", temp);//这是输出700时显示倒叙值为007的代码
   //     x/=10;           //注释内容为输出700时显示倒叙值为7的代码
   //     y=y*10+temp;
    }
   //  printf("%d\n", y);
    return 0;
} 

averge_number:
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

guess_number:
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