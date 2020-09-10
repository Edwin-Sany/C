/*using const qualifier to declare unchanging values*/

#include <stdio.h>
#define tax_rate 0.3;
void main()
{

/*const float tax_rate=0.3;*/
float sal, tax;

printf("Enter your salary: ");
scanf("%f", &sal);

tax = sal * tax_rate;

printf("The tax is: %f", tax);

}

