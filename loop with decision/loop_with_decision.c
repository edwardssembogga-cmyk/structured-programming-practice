 #include <stdio.h>
#include <stdlib.h>

int main()
{
/*
A program that calculates and prints the sum of all multiples of 7 from 1 to 100.
REFERENCE: C PROGRAMING PAGE 225 EXE 4.11
*/

    int sum = 0;

    for(int i = 1;i <= 100;i++){
        if(i % 7 == 0){
            sum = sum + i;
        }
    }

    printf("The sum of multilpes of 7 from 1 to 100 is: %d\n",sum);






    return 0;
}
