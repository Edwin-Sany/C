#include <stdio.h>
#include <math.h>

void main()
{

int ncmp_year;
float p,t,r;
float simple,cmp_amount,compound;

printf("Enter the principal amount:");
scanf("%f", &p);
printf("Enter the time period:");
scanf("%f", &t);
printf("Enter the rate:");
scanf("%f", &r);
printf("Enter the compoundings/year:");
scanf("%d",&ncmp_year);

simple=p*t*r/100;

cmp_amount=p * pow(1+r/(ncmp_year*100),ncmp_year*t); /*calculate the amount resulting from the compount interest*/

compound=cmp_amount-p;

printf("simple interest is: %f\n", simple);

printf("compount interst is: %f\n", compound);
}
