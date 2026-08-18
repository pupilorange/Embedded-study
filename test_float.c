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