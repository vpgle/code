#include <stdio.h>
#define big_rate 0.28
#define sml_rate 0.15
#define single 17850
#define god 23900
#define mar_two 29750
#define mar_one 14875
int main(void)
{
    float earnings, tax;
    int tax_sort;

    printf("**********************************************************\n");
    printf("1.单身\n");
    printf("2.户主\n");
    printf("3.已婚，共有\n");
    printf("4.已婚，离异\n");
    printf("**********************************************************\n");
    printf("请选择缴纳税金种类: ");
    scanf("%d", &tax_sort);
    printf("请输入应纳税收入：");
    scanf("%f", &earnings);

    while (1)
    {
        switch(tax_sort)
        {
            case 1: 
                if (earnings > single)
                    tax = sml_rate * single + big_rate * (earnings - single);
                else
                    tax = sml_rate * earnings;
                break;
            case 2: 
                if (earnings > god)
                    tax = sml_rate * god + big_rate * (earnings - god);
                else
                    tax = sml_rate * earnings;
                break;
            case 3: 
                if (earnings > mar_two)
                    tax = sml_rate * mar_two + big_rate * (earnings - mar_two);
                else
                    tax = sml_rate * earnings;
                break;
            case 4: 
                if (earnings > mar_one)
                    tax = sml_rate * mar_one + big_rate * (earnings - mar_one);
                else
                    tax = sml_rate * earnings;
                break;
        }
        printf("应缴纳税金：%.2f\n", tax);

        printf("**********************************************************\n");
        printf("1.单身\n");
        printf("2.户主\n");
        printf("3.已婚，共有\n");
        printf("4.已婚，离异\n");
        printf("**********************************************************\n");
        printf("请选择缴纳税金种类: ");
        scanf("%d", &tax_sort);
        printf("请输入应纳税收入：");
        scanf("%f", &earnings);
    }

    return 0;
}