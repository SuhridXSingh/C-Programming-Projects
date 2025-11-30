#include <stdio.h>
#include <math.h>
int main() {

    // COMPOUND INTEREST CALCULATOR

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compunded = 0;
    double total = 0.0;

    printf("Coumpund Interest Calculator\n");

    printf("Enter the Principal (P): ");
    scanf("%lf",&principal);

    printf("Enter the Intereset Rate in percent (r): ");
    scanf("%lf",&rate);
    rate = rate/100;

    printf("Enter the number of Years (t): ");
    scanf("%d",&years);

    printf("Enter no. of times compounded per year (n): ");
    scanf("%d",&times_compunded);

    total = principal * pow(1 + (rate/times_compunded),times_compunded*years);

    printf("Final Amount after compounding (A): %.2lf ",total);

    return 0;
}
