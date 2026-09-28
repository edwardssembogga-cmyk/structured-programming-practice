#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This program reads two integers from the user then displays the sum, product, difference,quotient and remainder.
    // C HOW TO PROGRAM PAGE 134 EXE 2.16(ARITHEMATIC)

    int sum, product, diff, quotient, rem, a, b;

    printf("Enter value for a: ");
    scanf("%d",&a);

    printf("Enter value for b: ");
    scanf("%d",&b);

    sum = a + b;
    product = a * b;
    diff = a - b;
    quotient = a / b;
    rem = a % b;

    printf("\n\n---------RESULTS-------------\n\n");

    printf("Sum: %d\n",sum);
    printf("Product: %d\n",product);
    printf("Difference: %d\n",diff);
    printf("Quoitient: %d\n",quotient);
    printf("Remainder: %d\n",rem);



























    return 0;
}
