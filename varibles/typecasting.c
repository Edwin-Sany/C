/*explicitly converting the lover type to higher type*/
#include <stdio.h>
void main()
{
int i = 2;
int j = 5;
float f; 

f = (float)j/i;

printf("the value of %f\n", f);
}
