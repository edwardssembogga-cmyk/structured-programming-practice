#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* c PROGRAMMING page 226 exercise 4.19
    the program asks the user to make a choice from 1 to 6 the also asks for the quantity the user wants
    the program calculates the total retail price and if the user chooses option 6 the program stops running.
    if the user inputs a negative quantity the program stops as well

    */
    float retail_price, total_retail_price;
    int choice, quantity;

    printf("Enter your choice(1-5):\n");
    printf("Choice 1: Soap\n");
    printf("Choice 2: Toothpaste\n");
    printf("Choice 3: Water\n");
    printf("Choice 4: Charcoal\n");
    printf("Choice 5: Salad\n");
    printf("Choice 6: EXIT\n");

    scanf("%d",&choice);

    if(choice == 6){
        printf("Exit program....\n");
        return 0;
    }

    printf("Enter quantity:\n");
    scanf("%d",&quantity);

    printf("You picked %d\n",choice);

    if(choice < 1 || choice > 6){
        printf("Enter choice between 1 and 6\n");
        return 0;
        }

        if(quantity < 0){
            printf("Quantity cannot be negative\n");
            return 0;
    }

    switch(choice)
   {
   case 1:
       retail_price = 1000;
       total_retail_price = retail_price * quantity;
       printf("Total retail price:%.2f",total_retail_price);
       break;
   case 2:
       retail_price = 2000;
       total_retail_price = retail_price * quantity;
       printf("Total retail price:%.2f",total_retail_price);
       break;
   case 3:
       retail_price = 1000;
       total_retail_price = retail_price * quantity;
       printf("Total retail price:%.2f",total_retail_price);
       break;
   case 4:
       retail_price = 10000;
       total_retail_price = retail_price * quantity;
       printf("Total retail price:%.2f",total_retail_price);
       break;
   case 5:
       retail_price = 100;
       total_retail_price = retail_price * quantity;
       printf("Total retail price:%.2f",total_retail_price);
       break;
   }

   printf("\n\n-----RESULTS--------\n\n");

   printf("CHOICE:%d\n",choice);
   printf("QUANTITY:%d\n",quantity);
   printf("RETAIL PRICE:%.2f\n",retail_price);
   printf("TOTAL RETAIL PRICE:%.2f\n",total_retail_price);


    return 0;
}
