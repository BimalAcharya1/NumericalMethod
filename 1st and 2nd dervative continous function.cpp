#include <stdio.h>
#include <math.h>

// Define the function
float f(float x)
{
    return x*x*x + x*x + x + 1;   // Example function
}

int main()
{
    float x, h;
    float first_derivative, second_derivative;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter step size h: ");
    scanf("%f", &h);

    first_derivative = (f(x + h) - f(x - h)) / (2 * h);
    second_derivative = (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);

    printf("\nFirst derivative at x = %.2f is %.4f", x, first_derivative);
    printf("\nSecond derivative at x = %.2f is %.4f\n", x, second_derivative);

    return 0;
}

