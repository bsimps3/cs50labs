#include <stdio.h>
#include <math.h>
int main(void)
{
   float side1 = 3;
   float side2 = 4;
   float side3 = sqrt( side1*side1 + side2*side2);

   printf("The hypotenuse of this right triangle is %f \n", side3);

   float x1 = 3.2;
   float y1 = 5.8;
   float x2 = -2.5;
   float y2 = 3.2;
   float distance = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );

   printf("The distance between the points is %f \n", distance);
}

