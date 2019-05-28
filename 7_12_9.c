// 7.12.9
#include <stdio.h>
int main(void)
{
    int num;
    int intarray[num - 2];
    int i, j;
    intarray[0] = 0;    //在这初始化，第一个值为0，其他未初始化的值也为0；

    printf("请输入一个正整数：\n");
    if ((scanf("%d", &num) == 1) && (num > 0))
    {
        for (j = 3; j <= num; ++j)
        { 
            for (i = 2;i <= j; ++i)
            {
                if ((j % i) != 0)
                {
                    // 处理重复，在判断一个数的所有除数出现重复问题上不好处理。
                    if (j != intarray[j - 3])               // 不相等才赋值，打印。
                    {
                        intarray[j - 3] = j;    
                        printf("%d\n", intarray[j - 3]);
                    }
                    else if (j == intarray[j - 3]   )
                        ;           //  相等即重复，重复不操作。
                }
                else
                    break;
            }                  
        }
    }

    return 0;
}

