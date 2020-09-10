#include <stdio.h>

void main()

{
float c,f;

printf("Enter temp in celsius: ");
scanf("%f", &c);

f=1.8*c+32;
printf("Temp in fahrenheit: %f\n", f);

printf("Enter the temp in fahrenheit: ");
scanf("%f",&f);

c=(f-32)/1.8;
printf("Temp in celsius: %f\n", c);

}
