#include <stdio.h>
#include <math.h>
void main()

{
float a,b,c;
float perimeter,s,area;
printf("Enter the 3 sides of a triangle: ");
scanf("%f %f %f", &a, &b, &c);

perimeter=a+b+c;
s=perimeter/2;

area=sqrt( s*(s-a)*(s-b)*(s-c) );
printf("The area of the trinagle is: %f\n", area);

}
