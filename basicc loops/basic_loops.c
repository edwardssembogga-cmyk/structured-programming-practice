#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    for(num = 2; num <= 100; num++)
    {
        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                break;
            }
        }

        if(i == num)
        {
            printf("%d \n", num);
        }



    }














    return 0;
}
