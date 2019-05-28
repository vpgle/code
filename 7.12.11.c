// 7.12.11
#include <stdio.h>
#define artichoke 2.05
#define beet	  1.15
#define carrot	  1.09
#define discount  0.95
int main(void)
{
    double partichoke, sum_artichoke_pound = 0;
    double pbeet, sum_beet_pound = 0;
    double pcarrot, sum_carrot_pound = 0;
    double total, sum_pound, vegetable_total, Freight_packing_fee, saveoff;
    char ch;

    printf("artichoke is %lf\n", partichoke);
    printf("beet is %lf\n", beet);
    printf("carrot is %lf\n", carrot);
    printf("q is quit!\n");
    while ((ch = getchar()) != 'q')
    {
        switch (ch)
        {
            case a:
                scanf("%lf", &partichoke);
                sum_artichoke_pound += partichoke;
                break;
            case b:
                scanf("%lf", &pbeet);
                partichoke += pbeet;
                break;
            case c:
                scanf("%lf", &pcarrot);
                sum_carrot_pound += pcarrot;
                break;
            case q:
                break;
        }
    }

    vegetable_total = artichoke * sum_artichoke_pound + beet * sum_beet_pound + carrot * sum_carrot_pound;   // 货物总价 蔬菜总价
    if (vegetable_total > (double)100)
    {
        vegetable_total *= discount;
        saveoff = vegetable_total * (1.0 - discount);
    }

    sum_pound = sum_artichoke_pound + sum_beet_pound + sum_carrot_pound;
    if (sum_pound <= (double)5)
    {
        total = vegetable_total + 6.5;
        Freight_packing_fee = 6.5;
    }
    else if ((sum_pound > (double)5) && (sum_pound <= (double)20))
    {
        total = vegetable_total + (double)14;
        Freight_packing_fee = 14.0;
    }
    else if (sum_pound > (double)20)
    {
        total = vegetable_total + (double)14 + (sum_pound - (double)20) * 0.5;
        Freight_packing_fee = (double)14 + (sum_pound - (double)20) * 0.5;
    }

    printf("货物总价是 %.2lf\n", vegetable_total);
    printf("折扣是 %.2lf\n", saveoff);
    printf("运费包装费是 %.2lf", Freight_packing_fee);

    printf("购买信息如下\n");
    printf("artichoke is %lf, pound is %lf\n", partichoke, sum_artichoke_pound);
    printf("beet is %lf, pound is %lf\n", beet, sum_beet_pound);
    printf("carrot is %lf, pound is %lf\n", carrot, sum_carrot_pound);
    printf("订购蔬菜费用是 %.2lf\n", vegetable_total);
    printf("订单总费用是 %.2lf\n", total);
    printf("折扣是 %.2lf\n", saveoff);
    printf("运费包装费是 %.2lf", Freight_packing_fee);

    return 0;
}