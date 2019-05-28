// 7.12.9
#include <stdio.h>
int main(void)
{
    int num;
    int i , j;
    int flag = 0;

    printf("请输入一个正整数：\n");
    if ((scanf("%d", &num) == 1) && (num > 0))
    {
        for (j = 3; j <= num; j++)
        { 
            for (i = 2;i <= j; ++i)
            {
                if ((j % i) != 0) 
                    flag = 0;
                else
                {
                    flag = 1;
                    break;
                }
            }      
            if (flag == 0) 
                printf("素数 is %d\n", j);
            else 
                flag = 0;
        }
    }
    return 0;
}

