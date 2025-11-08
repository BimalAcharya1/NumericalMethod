#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

#define f(x) (x*x - 4*x - 10)   // Function: x^2 - 4x - 10
#define E 0.001                 // Tolerance

int main()
{
    float x1, x2, x3, f1, f2;
    int step = 1;

    printf("Enter two initial guesses: ");
    scanf("%f %f", &x1, &x2);

    while (1)
    {
        f1 = f(x1);
        f2 = f(x2);

        if (f1 == f2)
        {
            printf("Mathematical Error: Division by zero!\n");
            break;
        }

        // Secant Method Formula
        x3 = x2 - (f2 * (x2 - x1)) / (f2 - f1);

        printf("Iteration %d: x = %f\n", step, x3);

        if (fabs((x3 - x2) / x3) < E)
        {
            printf("\nThe root is: %f\n", x3);
            break;
        }

        x1 = x2;
        x2 = x3;
        step++;
    }

    getch();
    return 0;
}
