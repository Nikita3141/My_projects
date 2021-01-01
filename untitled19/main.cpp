
#include <stdio.h>
#include <math.h>


long double powering(long double denominator, int power);
int main(void)
{
    int power;
    long double denominator;

    scanf("%Lf", &denominator);
    scanf("%d", &power);
    if (power==0)
        printf("%d\n",1);
    if (power>0)
        printf("%.12Lf\n", powering(denominator, power));
    if (power<0)
        printf("%.12Lf\n", 1.0 / powering(denominator, power));

    return 0;
}


long double powering(long double denominator, int power)
{
    if (abs(power) == 1)
        return denominator;
    else
    if (power==0)
        return 1;
    else
    if (power>0)
        return denominator*powering(denominator, power - 1);
    else
    if (power<0)
        return denominator*powering(denominator, abs(power) - 1);
