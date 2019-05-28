// # 8.11.2
#include <stdio.h>
int main(void)
{
    char ch;
    int num = 0;

    while (1)
    {
        if ((ch = getchar()) != EOF )
        {
            printf("%c:%d ", ch, ch);
            if ((++num % 10 ) == 0)
                putchar('\n');
        }
        else
            break;
    }

    printf("Done!\n");
    getchar();
    return 0;
}