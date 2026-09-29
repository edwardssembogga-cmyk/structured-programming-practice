#include <stdio.h>
#include <stdlib.h>

int main()
{
    //

    double radius, diameter, circumference, area;
   double pie = 3.14;
   int i;

   for(i = 1;i <= 3;i++);
   {
       printf("Enter radius %d: ",i);
       scanf("%If",&radius);

       diameter = 2 * radius;
       circumference = 2 * pie * radius;
       area = pie * radius * radius;

       printf("Diameter = %.2f\n",diameter);
       printf("Circumfrence = %.2f\n",circumference);
       printf("Area = %.2f\n",area);


   }






















    return 0;
}
