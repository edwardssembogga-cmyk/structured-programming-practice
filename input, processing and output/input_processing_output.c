#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This program finds the final velocity of a body and the distance covered.
    //C HOW TO PROGRAM PAGE 134 EXE 2.17(FINAL VELOCITY)

    // intial velocity = u, acceleration = a, time = t, velocity = v,distance travelled = s

    float u, a, v, s;
    int t;

    printf("Enter initial velocity (u): ");
    scanf("%f",&u);

    printf("Enter acceleration of the body (a): ");
    scanf("%f",&a);

    printf("Enter time ellapsed (t): ");
    scanf("%d",&t);

    v = u + a * t;
    s = u * t + 0.5 * a * (2*t);

    printf("\n\n-----------OUTPUT---------------------\n\n");

    printf("The body travelled a Distance (s) of %.2f with a Velocity (v) of %.2f",s,v);


 return 0;
}
