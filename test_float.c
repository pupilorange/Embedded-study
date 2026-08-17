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