#include <stdio.h>
#include <stdlib.h>
void starbar(char cha, int m);
int main(void)
{
    char ch;

    printf("hello haha!\n");
    if ((ch = getchar()) == 'q')
    {
        starbar('*', 40);
    }
    else
        printf("Bye  Bye!\n");
    printf("NO Chinese !\n");

    getchar();
    getchar();
    //    system("pause");
    return 0;
}


void starbar(char cha, int m)
{
    int n;

    for (n = 0; n < m; n++)
        printf("%c", cha);
    printf("\n");
}