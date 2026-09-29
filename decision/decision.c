#include <stdio.h>
#include <stdlib.h>

int main()
{
   // This program determines the Gross pay of each and several employees
   // C HOW TO PROGRAM PAGE 178 EXE 3.20(SALARY CALCULATOR)

   char name[50];
   float hours_worked, salary;
   int rate_per_hour = 5000;

   printf("Enter your name: ");
   scanf("%49s",name);

   printf("Enter hours worked: ");
   scanf("%f",&hours_worked);

   if(hours_worked < 0){
    printf("Hours worked cannot be negative");
   }
  else if(hours_worked <= 40){
    salary = hours_worked * rate_per_hour;

    printf("Straight time\n");
    printf("Salary(UGX): %.2f\n",salary);
   }
   else{
    salary = (40 * rate_per_hour) + ((hours_worked - 40) * rate_per_hour * 1.5);

    printf("Time and a half\n");
    printf("Salary(UGX): %.2f\n",salary);
   }

    printf("Total salary(UGX): %.2f",salary);


    return 0;
}
