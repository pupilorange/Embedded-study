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