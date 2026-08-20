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